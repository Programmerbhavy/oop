/*
wap in cpp to create book class which contains details of book nderived text book from it
 and e-book which contains number of payes and e-book link respectfully also derived sales class 
 from text book and e-book to display sales details.
*/

#include<iostream>
using namespace std;

class book
{
    public:
    void getbook()
    {
        cout<<"\n book of cpp";
    }
};
class textbook : public book
{
    public:
    void getpages()
    {
        cout<<"\n 250 pages";
    }
};
class ebook
{
    public:
    void getebooklink()
    {
        cout<<"\n book link:- google scholar";
    }
};
class sales : public textbook,public ebook
{
    public:
    void getsales()
    {
        cout<<"\n cost of book is 250 rs & ebook is 100 rs";
    }
};
int main()
{
    sales obj;
    obj.getbook();
    obj.getpages();
    obj.getebooklink();
    obj.getsales();
    return 0;
}