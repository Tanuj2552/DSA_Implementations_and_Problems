

class BadLengthException {
    private: 
        int n;
    public:
        BadLengthException(int e) {
            n = e;
        }
    
        int what() {
            return n;
        }
};
