/* wap to calculate result of a student having veriable roll no,name and 3 subject marks are their calculate perc of
 student also calculate grade of a student and find
 the highest and lowest subject mark */

 #include<iostream.h>
 #include<conio.h>

 class student
 {
	public:
	int rno,phy,chem,maths;
	char *sname;

	void getdata()
	{
	  cout<<"enter roll no ,sname and marks of phy , chem , and maths";
	  cin>>rno>>sname>>phy>>chem>>maths;

	}
	void findpercentgrade()
	{
		int total = phy+chem+maths;
		int per = total/3;
		cout<<"\n total marks"<<total;
		cout<<"\n percentage"<<per;

	       //find grade
	       if(per<35)
	       {
			cout<<"better luck try to next time";
	       }
	       else
	       {
			cout<<"grade :- qulified";
	       }
	   }
void findhighlowmarks()
{
    if(phy == chem == maths)
      cout<<"\n all marks are same";
    else if(phy>chem && phy>maths)
      cout<<"\nhighest marks in phy";
    else if(chem>phy && chem>maths)
      cout<<"\nhighest marks in chem";
    else
      cout<<"\nHighest marks in maths";

    if(phy <chem && phy<maths)
      cout<<"\n lowest marks in physics";
    else if(chem <phy && chem < maths)
     cout<< "\n lowest marks in chem";
    else
    cout<<"\n lowest marks in mathes";
  }
 };
 void main()
{
 student s1;
 clrscr();
 s1.getdata();
 s1.findpercentgrade();
 s1.findhighlowmarks();

getch();

}














