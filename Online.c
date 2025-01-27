#include&lt;stdio.h&gt;
int main()
{
printf(&quot;...\t\t\t\t\tSHANESREE TOURISM
REGISTRATION\t\t\t\t\t...\n\n&quot;);
printf(&quot;\n\n&quot;);
int no_of_members,starting_date,returning_date,no_
of_days,final,answer;
printf(&quot;Enter the number of passengers : &quot;);
scanf(&quot;%d&quot;,&amp;no_of_members);
for(int i=1;i&lt;=no_of_members;i++)
{
char name[20],name1[20],gender[35]; int age;
int a;
double contact_number; printf(&quot;Enter First Name : &quot;);
5

scanf(&quot;%s&quot;,name); printf(&quot;Enter Last Name : &quot;);
scanf(&quot;%s&quot;,name1); printf(&quot;Enter gender :&quot;);
scanf(&quot;%s&quot;,gender);
printf(&quot;Enter age :&quot;); scanf(&quot;%d&quot;,&amp;age);
printf(&quot;Enter contact number :
&quot;);scanf(&quot;%lf&quot;,&amp;contact_number);
printf(&quot;\n\t\t\t\tPASSENGER&#39;S NAME : %s
%s\n&quot;,name,name1);
printf(&quot;\t\t\t\tPASSENGER&#39;S GENDER :
%s\n&quot;,gender);
printf(&quot;\t\t\t\tPASSENGER&#39;S AGE :
%d\n&quot;,age);
printf(&quot;\t\t\t\tPASSENGER&#39;S CONTACT NUMBER :
%0.0lf\n&quot;,contact_number);
}
printf(&quot;\n\n....\t\t\t\tTOURIST
DESTINATIONS\t\t\t\t....\n\n&quot;);
printf(&quot;\t\t\t\t 1. DELHI \n\t\t\t\t 2. KERALA

6

\n\t\t\t\t 3. ANDHRA PRADESH \n\t\t\t\t 4. KASHMIR
\n\t\t\t\t 5. GOA \n&quot;);
int choice;
printf(&quot;Enter your choice : \n&quot;);
scanf(&quot;%d&quot;,&amp;choice); if(choice==1)
{
printf(&quot;You have selected
DELHI.\n\n...\t\t\t\t\tAMOUNT\t\t\t\t\t...\n\nTotal
Amount :- 3000(Without GST)\n1.Travels :-
700\n2.Foods
:- 1000\n3.Stays
:-
1300\n4.Services :- 300(Not
Compulsory)\n5.GST
final=3600;
}

7

if(choice==2)
{
:- 600\n\n&quot;);
printf(&quot;You have selected
KERALA.\n\n...\t\t\t\t\tAMOUNT\t\t\t\t\t...\n\nTo
tal Amount :- 5000(Without GST)\n1.Travels :-
Compulsory)\n5.GST
final=6000;
}
if(choice==3)
{
:- 1000\n\n&quot;);
printf(&quot;You have selected ANDHRA
PRADESH.\n\n...\t\t\t\t\tAMOUNT\t\t\t\t\t...\n\n
Total Amount :- 5000(Without GST)\n1.Travels :-
2000\n2.Foods
:- 1400\n3.Stays
:-
1400\n2.Foods
:- 1600\n3.Stays

8

:-
2000\n4.Services :- 300(Not1600\n4.Services :-
300(Not
Compulsory)\n5.GST
final=6000;
}
if(choice==4)
{
:- 1000\n\n&quot;);
printf(&quot;You have selected
KASHMIR.\n\n...\t\t\t\t\tAMOUNT\t\t\t\t\t...\n\n
Total Amount :- 4000(Without GST)\n1.Travels :-
Compulsory)\n5.GST
final=4800;
}
if(choice==5)
{
:- 800\n\n&quot;);
printf(&quot;You have selected

9

GOA.\n\n...\t\t\t\t\tAMOUNT\t\t\t\t\t...\n\nTotal
Amount :- 4500(Without GST)\n1.Travels :-
Compulsory)\n5.GST
final=5400;
:- 900\n\n&quot;);
1700\n2.Foods
:- 1000\n3.Stays
:-
1300\n4.Services :- 300(Not
1700\n2.Foods
:- 1500\n3.Stays
:-
1300\n4.Services :- 300(Not}
printf(&quot;Starting Date(DDMMYYYY) : &quot;);
scanf(&quot;%d&quot;,&amp;starting_date);
printf(&quot;Returning Date(DDMMYYYY) : &quot;);
scanf(&quot;%d&quot;,&amp;returning_date); printf(&quot;Number of
Days : &quot;); scanf(&quot;%d&quot;,&amp;no_of_days);

10

final=final*no_of_days;
printf(&quot;Extra Services Needed :
\n1.YES\n2.NO\nEnter Your Choice : &quot;);
scanf(&quot;%d&quot;,&amp;answer); if(answer==1)
{
final=final+300;
}
printf(&quot;\nFinal Amount To Be Paid : %d\n&quot;,final);
printf(&quot;\n\n...\t\t\t\t\tThank You For
Registering.\t\t\t\t\t...&quot;);
}********************************************