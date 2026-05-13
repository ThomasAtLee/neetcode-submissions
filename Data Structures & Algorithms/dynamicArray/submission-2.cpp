class DynamicArray {

std::vector<int> arr;
int c;
public:

    DynamicArray(int capacity) {
       std::vector<int> arr;
       c = capacity;
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        arr.push_back(n);
        if (arr.size() > c){
            resize();
        }
    }

    int popback() {
        int e = arr.back();
        arr.pop_back();
        return e;
    }

    void resize() {
        c *= 2;
    }

    int getSize() {
        return arr.size();
    }

    int getCapacity() {
        return c;
    }
};
