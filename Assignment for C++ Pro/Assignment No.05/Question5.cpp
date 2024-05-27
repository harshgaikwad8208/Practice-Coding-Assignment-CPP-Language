#include <iostream>
#include <cstring>
using namespace std;

struct capAccessories 
{
    double price;
    char material[20];
    char color[20];
    int size;

	virtual void wear()
	{
		cout<<"\nwear";
	}
    capAccessories() 
	{
        cout << "\n\nCap Accessories default constructor called";
        this->price = 0;
        strcpy(this->material, "not given");
        strcpy(this->color, "not given");
        this->size = 0;
    }

    capAccessories(double p, const char* m, const char* c, int s) 
	{
        cout << "\n\nCap Accessories parameterized constructor called";
        this->price = p;
        strcpy(this->material, m);
        strcpy(this->color, c);
        this->size = s;
    }

    void setPrice(double p) 
	{
        this->price = p;
    }

    void setMaterial(const char* m) 
	{
        strcpy(this->material, m);
    }

    void setColor(const char* c) {
        strcpy(this->color, c);
    }

    void setSize(int s) {
        this->size = s;
    }

    double getPrice() {
        return this->price;
    }

    const char* getMaterial() 
	{
        return this->material;
    }

    const char* getColor() 
	{
        return this->color;
    }

    int getSize() {
        return this->size;
    }

    void display() {
        cout << "\nPrice: " << price << "\nMaterial: " << material << "\nColor: " << color << "\nSize: " << size;
    }
};

class sportsCap : public capAccessories 
{
    char sportType[20];
    char brand[20];

public:
	 void wear()
	{
		cout<<"\nwear while playing sport";
	}
    sportsCap() : capAccessories() 
	{
        cout << "\n\nSports Cap default constructor called";
        strcpy(this->sportType, "not given");
        strcpy(this->brand, "not given");
    }

    sportsCap(double p, const char* m, const char* c, int s, const char* st, const char* b) : capAccessories(p, m, c, s)
	 {
        cout << "\n\nSports Cap parameterized constructor called";
        strcpy(this->sportType, st);
        strcpy(this->brand, b);
    }

    void setSportType(const char* st) 
	{
        strcpy(this->sportType, st);
    }

    const char* getSportType() 
	{
        return this->sportType;
    }

    void setBrand(const char* b) 
	{
        strcpy(this->brand, b);
    }

    const char* getBrand() 
	{
        return this->brand;
    }

    void display() 
	{
        capAccessories::display();
        cout << "\nSport Type: " << sportType << "\nBrand: " << brand;
    }
};

struct winterCap : public capAccessories 
{
    char warmthType[20];
    char design[20];

	 void wear()
	{
		cout<<"\nwear in winter";
	}
    winterCap() : capAccessories() 
	{
        cout << "\n\nWinter Cap default constructor called";
        strcpy(this->warmthType, "not given");
        strcpy(this->design, "not given");
    }

    winterCap(double p, const char* m, const char* c, int s, const char* wt, const char* d) : capAccessories(p, m, c, s) {
        cout << "\n\nWinter Cap parameterized constructor called";
        strcpy(this->warmthType, wt);
        strcpy(this->design, d);
    }

    void setWarmthType(const char* wt) {
        strcpy(this->warmthType, wt);
    }

    const char* getWarmthType() {
        return this->warmthType;
    }

    void setDesign(const char* d) {
        strcpy(this->design, d);
    }

    const char* getDesign() {
        return this->design;
    }

    void display() {
        capAccessories::display();
        cout << "\nWarmth Type: " << warmthType << "\nDesign: " << design;
    }
};

struct fashionCap : public capAccessories 
{
    char style[20];
    char designer[20];

	 void wear()
	{
		cout<<"\nfashion wear ";
	}
    fashionCap() : capAccessories() 
	{
        cout << "\n\nFashion Cap default constructor called";
        strcpy(this->style, "not given");
        strcpy(this->designer, "not given");
    }

    fashionCap(double p, const char* m, const char* c, int s, const char* st, const char* d) : capAccessories(p, m, c, s) {
        cout << "\n\nFashion Cap parameterized constructor called";
        strcpy(this->style, st);
        strcpy(this->designer, d);
    }

    void setStyle(const char* st) {
        strcpy(this->style, st);
    }

    const char* getStyle() {
        return this->style;
    }

    void setDesigner(const char* d) {
        strcpy(this->designer, d);
    }

    const char* getDesigner() {
        return this->designer;
    }

    void display() {
        capAccessories::display();
        cout << "\nStyle: " << style << "\nDesigner: " << designer;
    }
};
int main() 
{
	capAccessories *cp;
    capAccessories cap1;
    capAccessories cap2(15.5, "wool", "black", 8);
    cp=&cap1;
    cp->display();
    cp->wear();

	sportsCap *scp;
    sportsCap sc1(20.0, "cotton", "red", 7, "Baseball", "Nike");
    scp=&sc1;
    scp->display();
    scp->wear();

	winterCap *wcp;
    winterCap wc1(25.0, "fur", "white", 7, "Thermal", "Snowflakes");
    wcp=&wc1;
    wcp->display();
    wcp->wear();

	fashionCap *fcp;
    fashionCap fc1(30.0, "silk", "gold", 7, "Beret", "Chanel");
    fcp=&fc1;
    fcp->display();
    fcp->wear();

    return 0;
}

   