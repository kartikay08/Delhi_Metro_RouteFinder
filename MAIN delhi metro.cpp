using namespace std;
#include<iostream>
#include<cstring>
#include<fstream>

char depart[20],arrival[20];

string yel(" SAMAYPUR BADLI ROHINI SECTOR 18 HAIDERPUR BADLI MOR JAHANGIRPURI ADARSH NAGAR AZADPUR MODEL TOWN GTB NAGAR VISHWAVIDYALAYA VIDHAN SABHA CIVIL LINES KASHMERE GATE CHANDNI CHOWK CHAWRI BAZAR NEW DELHI RAJIV CHOWK PATEL CHOWK CENTRAL SECRETARIAT UDYOG BHAWAN LOK KALYAN MARG JORBAGH INA AIIMS GREEN PARK HAUZ KHAS MALVIYA NAGAR SAKET QUTAB MINAR CHHATTARPUR SULTANPUR GHITORNI ARJANGARH GURU DRONACHARYA SIKANDARPUR MG ROAD IFFCO CHOWK HUDA CITY CENTRE");

string yelr(" HUDA CITY CENTRE IFFCO CHOWK MG ROAD SIKANDARPUR GURU DRONACHARYA ARJANGARH GHITORNI SULTANPUR CHHATTARPUR QUTAB MINAR SAKET MALVIYA NAGAR HAUZ KHAS GREEN PARK AIIMS INA JORBAGH LOK KALYAN MARG UDYOG BHAWAN CENTRAL SECRETARIAT PATEL CHOWK RAJIV CHOWK NEW DELHI CHAWRI BAZAR CHANDNI CHOWK KASHMERE GATE CIVIL LINES VIDHAN SABHA VISHWAVIDYALAYA GTB NAGAR MODEL TOWN AZADPUR ADARSH NAGAR JAHANGIRPURI HAIDERPUR BADLI MOR ROHINI SECTOR 18 SAMAYPUR BADLI");


string red(" DILSHAD GARDEN JHILMIL MANSAROVAR PARK SHAHDARA WELCOME SEELAMPUR SHASTRI PARK KASHMERE GATE TIS HAZARI PUL BANGASH PRATAP NAGAR SHASTRI NAGAR INDERLOK KANHAIYA NAGAR KESHAV PURAM NETAJI SUBHASH PLACE KOHAT ENCLAVE PITAMPURA ROHINI EAST ROHINI WEST RITHALA");

string redr(" RITHALA ROHINI WEST ROHINI EAST PITAMPURA KOHAT ENCLAVE NETAJI SUBHASH PLACE KESHAV PURAM KANHAIYA NAGAR INDERLOK SHASTRI NAGAR PRATAP NAGAR PUL BANGASH TIS HAZARI KASHMERE GATE SHASTRI PARK SEELAMPUR WELCOME SHAHDARA MANSAROVAR PARK JHILMIL DILSHAD GARDEN");


string green(" KIRTI NAGAR SATGURU RAM SINGH MARG ASHOK PARK MAIN INDERLOK PUNJABI BAGH SHIVAJI PARK MADI PUR PASCHIM VIHAR EAST PASCHIM VIHAR WEST PEERA GARHI UDYOG NAGAR SURAJMAL STADIUM NANGLOI NANGLOI RAILWAY STATION RAJDHANI PARK MUNDKA");

string greenr(" MUNDKA RAJDHANI PARK NANGLOI RAILWAY STATION NANGLOI SURAJMAL STADIUM UDYOG NAGAR PEERA GARHI PASCHIM VIHAR WEST PASCHIM VIHAR EAST MADIPUR SHIVAJI PARK PUNJABI BAGH INDERLOK ASHOK PARK MAIN SATGURU RAM SINGH MARG KIRTI NAGAR ");



string blue(" NOIDA CITY CENTRE GOLF COURSE BOTANICAL GARDEN NOIDA SEC 18 NOIDA SEC 16 NOIDA SEC 15 NEW ASHOK NAGAR MAYUR VIHAR-I EXT MAYUR VIHAR-I AKSHARDHAM YAMUNA BANK INDRAPRASTHA PRAGATI MAIDAN MANDI HOUSE BARAKHAMBA RAJIV CHOWK RK ASHRAM MARG JHANDEWALAN KAROL BAGH RAJENDRA PLACE PATEL NAGAR SHADIPUR KIRTI NAGAR MOTI NAGAR RAMESH NAGAR RAJOURI GARDEN TAGORE GARDEN SUBHASH NAGAR TILAK NAGAR JANAK PURI EAST JANAK PURI WEST UTTAM NAGAR EAST UTTAM NAGAR WEST NAWADA DWARKA MOR DWARKA DWARKA SEC 14 DWARKA SEC 13 DWARKA SEC 12 DWARKA SEC 11 DWARKA SEC 10 DWARKA SEC 9 DWARKA SEC 8 DWARKA SEC 21");

string bluer(" DWARKA SEC 21 DWARKA SEC 8 DWARKA SEC 9 DWARKA SEC 10 DWARKA SEC 11 DWARKA SEC 12 DWARKA SEC 13 DWARKA SEC 14 DWARKA DWARKA MOR NAWADA UTTAM NAGAR WEST UTTAM NAGAR EAST JANAKPURI WEST JANAKPURI EAST TILAK NAGAR SUBHASH NAGAR TAGORE GARDEN RAJOURI GARDEN RAMESH NAGAR MOTI NAGAR KIRTI NAGAR SHADIPUR PATEL NAGAR RAJENDRA PLACE KAROL BAGH JHANDEWALAN RK ASHRAM MARG RAJIV CHOWK BARAKHAMBA MANDI HOUSE PRAGATI MAIDAN INDRAPRASTHA YAMUNA BANK  AKSHARDHAM MAYUR VIHAR-I MAYUR VIHAR-I EXT NEW ASHOK NAGAR NOIDA SEC 15 NOIDA SEC 16 NOIDA SEC 18 BOTANICAL GARDEN GOLF COURSE NOIDA CITY CENTRE");

int ya=0,yd=0,ya1=0,yd1=0,ra=0,rd=0,ra1=0,rd1=0,ga=0,gd=0,ga1=0,gd1=0,ba=0,bd=0,ba1=0,bd1=0,yta=0,rta=0,gta=0,bta=0,nc=0;


// FOR YELLOW LINE ONLY
void yellowon()
{ 

if(yta==0)
{ 

if(ya>yd)
{	cout<<" !YELLOW LINE!  "<<endl;

for(int l=yd;l<ya;l++)
cout<<yel.at(l);
if(nc==0)
cout<<arrival<<endl;
}

if(ya<yd)
{	cout<<" !YELLOW LINE!  "<<endl;
for(int l=yd1;l<ya1;l++)
cout<<yelr.at(l);
if(nc==0)
cout<<arrival<<endl;
}
}
} 

// FOR RED LINE ONLY

void redon()
{ 

 if(rta==0)
{ 

if(ra>rd)
	{ 	cout<<" !RED LINE!  "<<endl;
	
for( int l=rd;l<ra;l++)
cout<<red.at(l);

if(nc==0)
cout<<arrival<<endl;

}
if(ra<rd)
{ 
cout<<" !RED LINE!  "<<endl;
	for( int l=rd1;l<ra1;l++)
cout<<redr.at(l);
if(nc==0)
cout<<arrival<<endl;

}

}
}

// FOR BLUE LINE ONLY

void blueon()
{

	
if(bta==0)
{

if(ba>bd)
	{
		cout<<" !BLUE LINE!  "<<endl;

for( int l=bd;l<ba;l++)
cout<<blue.at(l);
if(nc==0)

cout<<arrival<<endl;

}

if(ba<bd)
	{
	
for( int l=bd1;l<ba1;l++)
cout<<bluer.at(l);
if(nc==0)

cout<<arrival<<endl;

}
}
}

// FOR GREEN LINE ONLY

void greenon()
	{
	
if(gta==0)
{
if(ga>gd)
	
{
	cout<<" !GREEN LINE!  "<<endl;

for( int l=gd;l<ga;l++)
cout<<green.at(l);
if(nc==0)
cout<<arrival<<endl;

}
if(ga<gd)
	
	{
	cout<<" !GREEN LINE!  "<<endl;
	
for( int l=gd1;l<ga1;l++)
cout<<greenr.at(l);
if(nc==0)
cout<<arrival<<endl;

} 
}
}

// FOR CHANGING FROM/TO RED LINE 

void redchange()
{

if(rta!=0)
{

if(rd>0||ra>0||rd1>0||ra1>0)
{
	
if(ra>rd)
	{ 	cout<<" !RED LINE!  "<<endl;
	
	
				cout<<" <CHANGE HERE> "<<endl;
for( int l=rd;l<ra;l++)
cout<<red.at(l);
}


if(ra<rd||rd1<ra1)
	{ 	
		cout<<" !RED LINE!  "<<endl;

			cout<<" <CHANGE HERE> "<<endl;
	
for( int l=rd1;l<ra1;l++)
cout<<redr.at(l);
}

}
}
}


// FOR CHANGING FROM/TO GREEN LINE 

void greenchange()
{

if(gta!=0)
{

if(gd>0||ga>0||gd1>0||ga1>0)
{
	
if(ga>gd)
	{ 	cout<<" !GREEN LINE!  "<<endl;
	
	
				cout<<" <CHANGE HERE> "<<endl;
for( int l=gd;l<ga;l++)
cout<<green.at(l);
}


if(ga<gd||gd1<ga1)
	{ 	
		cout<<" !GREEN LINE!  "<<endl;

			cout<<" <CHANGE HERE> "<<endl;
	
for( int l=gd1;l<ga1;l++)
cout<<greenr.at(l);
}

}
}
}


// FOR CHANGING FROM/TO YELLOW LINE 

void yellowchange()
{


if(yd>0||ya>0||yd1>0||ya1>0)
{
 
if(yta!=0)
{

if(ya>yd)
{	cout<<" !YELLOW LINE!  "<<endl;

cout<<" <CHANGE HERE> "<<endl;
for(int l=yd;l<ya;l++)
cout<<yel.at(l);

}
if(ya<yd||yd1<ya1)
{	cout<<" !YELLOW LINE!  "<<endl;
cout<<" <CHANGE HERE> "<<endl;

for(int l=yd1;l<ya1;l++)
cout<<yelr.at(l);


}
}
}
}


// FOR CHANGING FROM/TO BLUE LINE 

void bluechange()
{


if(bd>0||ba>0||bd1>0||ba1>0)
{ 
if(bta!=0)
{

if(ba>bd)
	{ 	cout<<" !BLUE LINE!  "<<endl;
	
				cout<<" <CHANGE HERE> "<<endl;
for( int l=bd;l<ba;l++)
cout<<blue.at(l);
}

if(ba<bd||bd1<ba1)
	{ 	
		cout<<" !BLUE LINE!  "<<endl;
			cout<<" <CHANGE HERE> "<<endl;
	
for( int l=bd1;l<ba1;l++)
cout<<bluer.at(l);
}
}
}
}



//FOR YELLOW TO RED
void yellowtored()
{
	if(yd!=0 && ra!=0)
	{
			  rta=-1;
	ya=149;
	rd=80;
	ya1=289;
	rd1=165;
 nc=1;}
yellowon();
redchange();
cout<<arrival;
}

//FOR RED TO YELLOW

void redtoyellow()
{

	if(rd!=0&& ya!=0)
	{ 
		 yta=-1;
	ra=80;
	yd=149;
	ra1=165;
	yd1=289;
 nc=1;
	}

redon();
yellowchange();
cout<<arrival;

}


//FOR YELLOW TO BLUE

void yellowtoblue()
{
	if(yd!=0 && ba!=0)
	{
		  bta=-1;
	ya=200;
	ya1=240;
	bd1=365;
	bd=209;
	nc=1;}
yellowon();
bluechange();
cout<<arrival;
}


//FOR BLUE TO YELLOW

void bluetoyellow()
{

	if(bd!=0&& ya!=0)
	{ 
	 yta=-1;
	ba1=365;
	ba=209;
	yd=200;
	yd1=240;
	 nc=1;
	}

blueon();
yellowchange();
cout<<arrival;

}


//FOR RED TO GREEN

void redtogreen()
{

	if(rd!=0&& ga!=0)
	{ 
		 gta=-1;
	ra=144;
	gd=52;
	ra1=106;
	gd1=167;
 nc=1;
	}

redon();
greenchange();
cout<<arrival;

}


//FOR GREEN TO RED
void greentored()
{
	if(gd!=0 && ra!=0)
	{
			  rta=-1;
	ga=52;
	rd=144;
	ga1=167;
	rd1=106;
 nc=1;}
greenon();
redchange();
cout<<arrival;
}



//FOR GREEN TO BLUE
void greentoblue()
{
	if(gd!=0 && ba!=0)
	{
			  bta=-1;
	ga=1;
	bd=295;
	ga1=215;
	bd1=279;
 nc=1;}
greenon();
bluechange();
cout<<arrival;
}


//FOR BLUE TO GREEN

void bluetogreen()
{

	if(bd!=0&& ga!=0)
	{ 
		 gta=-1;
	ba=295;
	gd=1;
	ba1=279;
	gd1=215;
 nc=1;
	}

blueon();
greenchange();
cout<<arrival;

}


//FOR BLUE TO RED

void bluetored()
{

	if(bd!=0&& ra!=0)
	{  nc=1;

		 if(bd>259)
		 { gta=-1;
	ba=295;
	gd=1;
	ba1=279;
		ga=52;

blueon();
greenchange();
rta=-1;
	rd=144;
	rd1=106;
redchange();		 
		 }
		 if(bd<259)
	{ 
	yta=-1;
	ba1=365;
	ba=209;
	yd1=240;
		ya1=289;
blueon();
yellowchange();
rta=-1;

	rd1=165;
	rd=80;
redchange();		 
 
	}
	
	}
cout<<arrival;

}



//FOR RED TO BLUE

void redtoblue()
{

	if(rd!=0&& ba!=0)
	{  nc=1;

		 if(ba>259)
		 { gta=-1;
		ra=144;
	ra1=106;
	gd1=167;
	ga1=215;


redon();
greenchange();
bta=-1;
	bd=295;
	bd1=279;
 bluechange();		 
		 }
	
	if(bd<259)
	{ 
	yta=-1;
		ra=80;
	yd=149;
		
ya=200;
	ra1=165;
redon();
yellowchange();
bta=-1;
bd1=365;
	bd=209;
	
bluechange();		 
 
	}
	}
	 
	cout<<arrival;

}



//FOR GREEN TO YELLOW

void greentoyellow()
{

	if(gd!=0&& ya!=0)
	{  nc=1;

		 if(ya>117)
		 { bta=-1;
		ga=1;
	ga1=215;
	bd1=279;
 
 ba1=365;
greenon();
bluechange();

yta=-1;
	yd=200;
	yd1=240;
	 yellowchange();		 
		 }
	
	}
	if(ya<117)
	{ 
	rta=-1;
		ga=52;
	ga1=167;
	rd1=106;
	ra1=165;
	
greenon();
redchange();
	
yta=-1;
	yd=149;
	yd1=289;
	 yellowchange();		 

	}


cout<<arrival;

}


main()
{ 

//char tr;



cout<<"\t\t\t\t\t***********************************"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\tWELCOME TO DELHI METRO \n\n"<<endl;
cout<<"\t\t\t\t\t***********************************"<<endl<<endl;

cout<<"\t\t\t\t\tENTER DEPARTURE STATION"<<endl;
cin.getline(depart,20); 
cout<<"\t\t\t\t\tENTER ARRIVAL STATION"<<endl;
cin.getline(arrival,20); 
cout<<endl<<endl;
	 
	 
	 yd=yel.find(depart);
	 ya=yel.find(arrival);
	
 	 yd1=yelr.find(depart);
	 ya1=yelr.find(arrival);
	
	
	 rd=red.find(depart);
	 ra=red.find(arrival);

 	 rd1=redr.find(depart);
	ra1=redr.find(arrival);



	 gd=green.find(depart);
	 ga=green.find(arrival);

 	 gd1=greenr.find(depart);
	 ga1=greenr.find(arrival);
	
	
		
	 bd=blue.find(depart);
     ba=blue.find(arrival);

 	 bd1=bluer.find(depart);
	 ba1=bluer.find(arrival);


if(yd>0 && yd1>0 && ya>0 && ya1>0)
{
yellowon();cout<<endl;
}
 else if (rd>0 && rd1>0 && ra>0 && ra1>0)
{
redon();cout<<endl;
}

else if (bd>0 && bd1>0 && ba>0 && ba1>0)
{
blueon();	cout<<endl;
}
	
else if (gd>0 && gd1>0 && ga>0 && ga1>0)
{
greenon();cout<<endl;
}
else if (ya>0 && ya1>0 && rd>0 && rd1>0)
{
redtoyellow();cout<<endl;
}

else if (yd>0 && yd1>0 && ra>0 && ra1>0)
{
yellowtored();cout<<endl;
}
else if (yd>0 && yd1>0 && ba>0 && ba1>0)
{
yellowtoblue();cout<<endl;
}
else if (bd>0 && bd1>0 && ya>0 && ya1>0)
{
bluetoyellow();cout<<endl;
}
else if (ga>0 && ga1>0 && rd>0 && rd1>0)
{
redtogreen();cout<<endl;
}
else if (gd>0 && gd1>0 && ra>0 && ra1>0)
{
greentored();cout<<endl;
}
else if (gd>0 && gd1>0 && ba>0 && ba1>0)
{
greentoblue();cout<<endl;
}
else if (bd>0 && bd1>0 && ga>0 && ga1>0)
{
bluetogreen();cout<<endl;
}
else if (bd>0 && bd1>0 && ra>0 && ra1>0)
{
bluetored();cout<<endl;
}
else if (ba>0 && ba1>0 && rd>0 && rd1>0)
{
redtoblue();cout<<endl;
}
else if (gd>0 && gd1>0 && ya>0 && ya1>0)
{
greentoyellow();cout<<endl;
}
//else 
//cout<<"\t\t\t\t\tWRONG STATION ENTERED"<<endl;


cout<<"\t\t\t\t\t***********************************"<<endl<<endl;

//cout<<"\t\t\t\t\tDO YOU WANT TO TRY AGAIN ?(Y/N)"<<endl;
//cin>>tr;
//if(tr=='Y'||tr=='y')
//goto start;
}








	



