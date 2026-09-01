class MyHashSet {
public:
    int M;
    vector<list<int>> buckets;

    MyHashSet() {
        M = 1e4;
        buckets = vector<list<int>> (M, list<int>{});
    }

    int getIndex(int key) {
        return key % M;
    }
    
    void add(int key) {
        auto &bucket = buckets[getIndex(key)];
        if (find(bucket.begin(), bucket.end(), key) == bucket.end()) {
            bucket.push_back(key);
        }
    }
    
    void remove(int key) {
        auto &bucket = buckets[getIndex(key)];
        auto it = find(bucket.begin(), bucket.end(), key);
        if (it != bucket.end()) {
            bucket.erase(it);
        }
    }
    
    bool contains(int key) {
        auto &bucket = buckets[getIndex(key)];
        return find(bucket.begin(), bucket.end(), key) != bucket.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
