// RAII buffer utility class.
template <class T>
struct ScopeArray final {
    ScopeArray() : _data(nullptr), _size(0) {}
    ScopeArray(T* data, size_t size) : _data(data), _size(size) {
    }
    virtual ~ScopeArray() {
        if (_data != nullptr) delete[] _data;
    }
    T* _data;
    size_t _size;
};
