#include <stdio.h>
#include "sine.c"

int chromaticScale();
int beverlyHills();
int topGun();
int soFresh();
int sweetChild();
int tubularBells();

char input = 'R';
int menu = 2;


int main()
{

    if (menu == 1)
    {
	enableLCD2();
	enableKeypad();
    }
	else
	{
	    enableLCD();
	    enableKeypad();
	}

    input = 'R';

    while(1)
    {

	switch(input) 
	{ 
	    case 0:
		clear();
		menu = 0;
		csOut();
		chromaticScale();
		break; 

	    case 1:
		clear();
		menu = 0;
		scOut();
		sweetChild();
		break; 

	    case 2:
		clear();
		menu = 0;
		tbOut();
		tubularBells();
		break;

	    case 3:
		clear();
		menu = 0;
		main();
		
	    case 4:
		clear();
		menu = 1;
		bhOut();
		beverlyHills();
		break;

	    case 5:
		clear();
		menu = 1;
		sfOut();
		soFresh();
		break;

 	    case 6:
		clear();
		menu = 1;
		tgOut();
		topGun();
		break; 

	    case 7:
        	clear();
		menu = 1;
		main();

	    default:
		break;

	input = 'R';

  	}
    } 
    return 0; 
}


int chromaticScale()
{

    a_low_loop(100);
    as_low_loop(100);
    b_low_loop(100);
    c_low_loop(100);
    cs_low_loop(100);
    d_low_loop(100);
    ds_low_loop(100);
    e_low_loop(100);
    f_low_loop(100);
    fs_low_loop(100);
    g_low_loop(100);
    gs_low_loop(100);
    a_high_loop(100);
    as_high_loop(100);
    b_high_loop(100);
    c_high_loop(100);
    cs_high_loop(100);
    d_high_loop(100);
    ds_high_loop(100);
    e_high_loop(100);
    f_high_loop(100);
    fs_high_loop(100);
    g_high_loop(100);
    gs_high_loop(100);
    g_high_loop(100);
    fs_high_loop(100);
    f_high_loop(100);
    e_high_loop(100);
    ds_high_loop(100);
    d_high_loop(100);
    cs_high_loop(100);
    c_high_loop(100);
    b_high_loop(100);
    a_high_loop(100);
    gs_low_loop(100);
    g_low_loop(100);
    fs_low_loop(100);
    f_low_loop(100);
    e_low_loop(100);
    ds_low_loop(100);
    d_low_loop(100);
    cs_low_loop(100);
    c_low_loop(100);
    b_low_loop(100);
    as_low_loop(100);
    a_low_loop(100);

    main();
}


int tubularBells()
{
    e_low_loop(150);
    silentloop(20);
    a_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    b_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    g_low_loop(150);
    silentloop(20);
    a_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    c_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    d_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    b_high_loop(150);
    silentloop(20);
    c_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    a_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    b_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    g_low_loop(150);
    silentloop(20);
    a_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    c_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    d_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    b_high_loop(150);
    silentloop(20);
    c_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    b_high_loop(150);
    silentloop(20);

    e_low_loop(150);
    silentloop(20);
    a_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    b_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    g_low_loop(150);
    silentloop(20);
    a_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    c_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    d_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    b_high_loop(150);
    silentloop(20);
    c_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    a_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    b_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    g_low_loop(150);
    silentloop(20);
    a_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    c_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    d_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    b_high_loop(150);
    silentloop(20);
    c_high_loop(150);
    silentloop(20);
    e_low_loop(150);
    silentloop(20);
    b_high_loop(150);
    silentloop(20);

    main();
}

int sweetChild()
{
    cs_low_loop(150);
    cs_high_loop(300);
    gs_low_loop(200);
    fs_low_loop(200);
    fs_high_loop(300);
    gs_low_loop(200);
    f_high_loop(400);
    gs_low_loop(200);
    cs_low_loop(150);
    cs_high_loop(300);
    gs_low_loop(200);
    fs_low_loop(200);
    fs_high_loop(400);
    gs_low_loop(200);
    f_high_loop(400);
    gs_low_loop(200);
    ds_low_loop(150);
    cs_high_loop(300);
    gs_low_loop(200);
    fs_low_loop(200);
    fs_high_loop(400);
    gs_low_loop(200);
    f_high_loop(400);
    gs_low_loop(200);
    ds_low_loop(150);
    cs_high_loop(300);
    gs_low_loop(200);
    fs_low_loop(200);
    fs_high_loop(400);
    gs_low_loop(200);
    f_high_loop(400);
    gs_low_loop(200);
    fs_low_loop(200);
    cs_high_loop(300);
    gs_low_loop(200);
    fs_low_loop(200);
    fs_high_loop(400);
    gs_low_loop(200);
    f_high_loop(400);
    gs_low_loop(200);
    fs_low_loop(200);
    cs_high_loop(300);
    gs_low_loop(200);
    fs_low_loop(200);
    fs_high_loop(400);
    gs_low_loop(200);
    f_high_loop(400);
    gs_low_loop(200);		
    cs_low_loop(150);
    cs_high_loop(300);
    gs_low_loop(200);
    fs_low_loop(200);
    fs_high_loop(400);
    gs_low_loop(200);
    f_high_loop(400);
    gs_low_loop(200);
    cs_low_loop(150);
    cs_high_loop(300);
    gs_low_loop(200);
    fs_low_loop(200);
    fs_high_loop(400);
    gs_low_loop(200);
    f_high_loop(400);
    gs_low_loop(200);

    main();
}

int beverlyHills()
{
    b_low_loop(200);
    silentloop(150);
    d_low_loop(200);
    silentloop(80);
    b_low_loop(100);
    silentloop(50);
    b_low_loop(75);
    silentloop(25);
    e_low_loop(150);
    silentloop(75);
    cs_low_loop(100);
    silentloop(75);
    a_low_loop(100);
    silentloop(75);
    b_low_loop(210);
    silentloop(150);
    fs_low_loop(250);
    silentloop(80);
    b_low_loop(100);
    silentloop(50);
    b_low_loop(75);
    silentloop(25);
    g_low_loop(150);
    silentloop(75);
    fs_low_loop(150);
    silentloop(75);
    e_low_loop(150);
    silentloop(75);
    b_low_loop(100);
    silentloop(50);
    fs_low_loop(175);
    silentloop(50);
    b_high_loop(250);
    silentloop(50);
    fs_low_loop(100);
    silentloop(50);
    b_low_loop(100);
    silentloop(50);
    b_low_loop(75);
    silentloop(25);
    a_low_loop(100);
    silentloop(50);
    d_low_loop(150);
    silentloop(75);
    b_low_loop(400);

    main();
}

int soFresh()
{
    c_low_loop(190);
    silentloop(30);
    d_low_loop(190);
    silentloop(30);
    ds_low_loop(140);
    silentloop(60);
    f_low_loop(190);
    silentloop(160);
    g_low_loop(230);
    silentloop(90);
    c_high_loop(250);
    silentloop(100);
    as_high_loop(250);
    silentloop(150);
    g_low_loop(400);
    silentloop(200);
    f_low_loop(215);
    silentloop(100);
    g_low_loop(225);
    silentloop(100);
    gs_low_loop(125);
    silentloop(50);
    g_low_loop(125);
    silentloop(200);
    f_low_loop(400);
	
    main();
}

int topGun()
{
    c_low_loop(180);
    silentloop(100);
    g_low_loop(260);
    silentloop(100);
    g_low_loop(260);
    silentloop(100);
    f_low_loop(110);
    silentloop(50);
    e_low_loop(110);
    silentloop(50);
    f_low_loop(110);
    silentloop(50);
    e_low_loop(110);
    silentloop(50);
    d_low_loop(210);
    silentloop(100);
    d_low_loop(210);
    silentloop(100);
    c_low_loop(100);
    silentloop(50);
    d_low_loop(100);
    silentloop(50);
    e_low_loop(210);
    silentloop(100);
    d_low_loop(100);
    silentloop(50);
    e_low_loop(110);
    silentloop(50);
    f_low_loop(210);
    silentloop(100);
    e_low_loop(110);
    silentloop(50);
    c_low_loop(100);
    silentloop(50);
    e_low_loop(210);
    silentloop(100);
    d_low_loop(600);
    silentloop(300);
	
    c_low_loop(180);
    silentloop(100);
    g_low_loop(260);
    silentloop(100);
    g_low_loop(260);
    silentloop(100);
    f_low_loop(110);
    silentloop(50);
    e_low_loop(110);
    silentloop(50);
    f_low_loop(110);
    silentloop(50);
    e_low_loop(110);
    silentloop(50);
    d_low_loop(200);
    silentloop(100);
    d_low_loop(200);
    silentloop(100);
    c_low_loop(100);
    silentloop(50);
    d_low_loop(100);
    silentloop(50);
    e_low_loop(210);
    silentloop(100);
    d_low_loop(100);
    silentloop(50);
    e_low_loop(110);
    silentloop(50);
    f_low_loop(210);
    silentloop(100);
    e_low_loop(110);
    silentloop(50);
    c_low_loop(100);
    silentloop(50);
    c_high_loop(900);
    silentloop(300);
	
    fs_low_loop(175);
    silentloop(100);
    cs_high_loop(250);
    silentloop(100);
    cs_high_loop(250);
    silentloop(100);
    b_high_loop(125);
    silentloop(50);
    as_high_loop(125);
    silentloop(50);
    b_high_loop(125);
    silentloop(50);
    as_high_loop(100);
    silentloop(50);
    gs_low_loop(200);
    silentloop(100);
    gs_low_loop(200);
    silentloop(100);
    fs_low_loop(100);
    silentloop(50);
    gs_low_loop(100);
    silentloop(50);
    as_high_loop(200);
    silentloop(100);
    gs_low_loop(100);
    silentloop(50);
    as_high_loop(100);
    silentloop(50);
    b_high_loop(200);
    silentloop(100);
    as_high_loop(100);
    silentloop(50);
    fs_low_loop(100);
    silentloop(50);
    as_high_loop(200);
    silentloop(100);
    gs_low_loop(600);
    silentloop(300);
	
    fs_low_loop(175);
    silentloop(100);
    cs_high_loop(250);
    silentloop(100);
    cs_high_loop(250);
    silentloop(100);
    b_high_loop(100);
    silentloop(50);
    as_high_loop(100);
    silentloop(50);
    b_high_loop(100);
    silentloop(50);
    as_high_loop(100);
    silentloop(50);
    gs_low_loop(200);
    silentloop(100);
    gs_low_loop(200);
    silentloop(100);
    fs_low_loop(100);
    silentloop(50);
    gs_low_loop(100);
    silentloop(50);
    as_high_loop(200);
    silentloop(100);
    gs_low_loop(100);
    silentloop(50);
    as_high_loop(100);
    silentloop(50);
    b_high_loop(200);
    silentloop(100);
    as_high_loop(100);
    silentloop(50);
    fs_low_loop(100);
    silentloop(50);
    fs_high_loop(900);

    main();
}



