int nValue;
float fValue;

struct Something
{
    int n;
    float f;
};

int main()
{
    Something sValue;
    void* ptr;
    ptr = &nValue; // valid
    ptr = &fValue; // valid
    ptr = &sValue; // valid
}