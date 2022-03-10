using namespace std;

struct IntAdd {
  int operator()(const int &a, const int &b) const {
    return a + b;
  }
};

struct Vector {

  vector<int> elements;

  Vector(int n) {
    elements = vector<int>(n, 0);
  }

  Vector operator+(const Vector &b) const {
    int n = this->elements.size();
    Vector ans(n);
    for (int i = 0; i < n; ++i) {
      ans.elements[i] = this->elements[i] + b.elements[i];
    }
    return ans;
  }
};

struct MatrixAdd {
  Vector operator()(const Vector &a, const Vector &b) {
    return a + b ;
  }
};
