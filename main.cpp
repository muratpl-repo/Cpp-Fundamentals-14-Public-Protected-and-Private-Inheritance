#include <iostream>

using namespace std;

class A{
public:
    int x;
};

class B{
protected:
    int y;
};

class C{
private:
    int z;

public:
    void setZ(int deger){
        z=deger;
    }
    void getZ(){
        cout<<z<<endl;
    }
};

class D:public A,public B, public C{
public:
    D(){
    y=5; //B sinifindaki Y'yi protected oldugu icin miras aldigimiz D sinifindan cagirabiliyoruz
    }
public:
    void getY(){
        cout<<y<<endl;
    }
};
int main()

{
    D d1;
    d1.x = 10;
    //cout<<d1.x; // Public oldugu icin sorun olmadi.
    //cout<<d1.y  // Protected oldugu icin sadece miras aldigi sinif uzerinden degistirebiliyoruz...
    //cout<<d1.z; //   Private oldugu icin sadece miras aldigi sinif uzerinden degistirebiliyoruz...
    //d1.getY();  // Private oldugu icin miras aldigi sinif uzerinden degistirebildik.

    d1.setZ(100); // Private oldugu icin sadece kendi sinifinden degistirebildik.
    d1.getZ();  //   Private oldugu icin sadece kendi sinifinden degistirebildik.

    return 0;
}
