//#define PGM_NOTE_P const prog_note * 
//typedef note    prog_note   PROGMEM;

const note TestR[] = {
	{17, 0},

	{Cn4, BPM60/2},
	{Dn4, BPM60/2},
	{En4, BPM60/2},
	{Fn4, BPM60/2},
	{Gn4, BPM60/2},
	{An4, BPM60/2},
	{Bn4, BPM60/2},
	{Cn5, BPM60/2},

	{Cn5, BPM60/2},
	{Bn4, BPM60/2},
	{An4, BPM60/2},
	{Gn4, BPM60/2},
	{Fn4, BPM60/2},
	{En4, BPM60/2},
	{Dn4, BPM60/2},
	{Cn4, BPM60/2}
};

const note TestL[] = {
	{9, 0},
	
	{Cn3, BPM60},
	{En3, BPM60},
	{Gn3, BPM60},
	{Bn3, BPM60},

	{Cn4, BPM60},
	{An3, BPM60},
	{Fn3, BPM60},
	{Dn3, BPM60},
};

const note TestC[] = {
	{27, 0},

	{Cn4, BPM60/4},	
	{Cs4, BPM60/4},	
	{Dn4, BPM60/4},	
	{Ds4, BPM60/4},	
	{En4, BPM60/2},	
	{Fn4, BPM60/4},	
	{Fs4, BPM60/4},	
	{Gn4, BPM60/4},	
	{Gs4, BPM60/4},	
	{An4, BPM60/4},	
	{As4, BPM60/4},	
	{Bn4, BPM60/2},	
	{Cn5, BPM60/2},	

	{Cn5, BPM60/2},	
	{Bn4, BPM60/4},	
	{Bb4, BPM60/4},	
	{An4, BPM60/4},	
	{Ab4, BPM60/4},	
	{Gn4, BPM60/4},	
	{Gb4, BPM60/4},	
	{Fn4, BPM60/2},	
	{En4, BPM60/4},	
	{Eb4, BPM60/4},	
	{Dn4, BPM60/4},	
	{Db4, BPM60/4},	
	{Cn4, BPM60/2}
};

const note KessonDalekMelody [] = {
	{50, 0},

	{Gn5, BPM85*3/4},
	{Gn5, BPM85/4},
	{Fs5, BPM85},
	{Fs5, BPM85/3},
	{Gn5, BPM85/3},
	{An5, BPM85/3},
	{Bn5, BPM85/3},
	{An5, BPM85/3},
	{Gn5, BPM85/3},

	{Fs5, BPM85*3/4},
	{Fs5, BPM85/4},
	{Fn5, BPM85},
	{Fn5, BPM85/3},
	{Fs5, BPM85/3},
	{Fn5, BPM85/3},
	{Fs5, BPM85/3},
	{Fn5, BPM85/3},
	{Fs5, BPM85/3},

	{Cs6, BPM85*3/4},
	{Cs6, BPM85/4},
	{Fs5, BPM85},
	{Fs5, BPM85/4},
	{Gn5, BPM85/2},
	{Fs5, BPM85/4},
	{Gn5, BPM85/4},
	{Fs5, BPM85/4},
	{Gn5, BPM85/4},
	{An5, BPM85/4},
	
	{Bn5, BPM85*4},

	//Segmento repetido 1
	{Cs6, BPM85*2},
	{Dn6, BPM85*3/4},
	{Fs6, BPM85*5/4},

	{Cs6, BPM85*2},
	{Dn6, BPM85*3/4},
	{An6, BPM85*5/4},

	{Cs6, BPM85*2},
	{Dn6, BPM85*3/4},
	{Fs6, BPM85*5/4},
	
	{Bn5, BPM85*4}, 

	//Segmento repetido 2
	{Cs6, BPM85*2},
	{Dn6, BPM85*3/4},
	{Fs6, BPM85*5/4},

	{Cs6, BPM85*2},
	{Dn6, BPM85*3/4},
	{An6, BPM85*5/4},

	{Cs6, BPM85*2},
	{Dn6, BPM85*3/4},
	{Fs6, BPM85*5/4},

	{Bn5, BPM85*8}
};

const note KessonDalekAccom [] = {
	{96, 0},

	{En4, BPM85/2}, 
	{Fs4, BPM85/2},
	{Bn4, BPM85/2},
	{En4, BPM85/2},
	{Fs4, BPM85/2},
	{Bn4, BPM85/2},
	{En4, BPM85/2},
	{Fs4, BPM85/2},

	{Dn4, BPM85/2}, 
	{Fs4, BPM85/2},
	{Bn4, BPM85/2},
	{Dn4, BPM85/2},
	{Fs4, BPM85/2},
	{Bn4, BPM85/2},
	{Dn4, BPM85/2},
	{Fs4, BPM85/2},

	{Cs4, BPM85/2}, 
	{Fs4, BPM85/2},
	{Cs5, BPM85/2},
	{Cs4, BPM85/2},
	{Fs4, BPM85/2},
	{Cs5, BPM85/2},
	{Cs4, BPM85/2},
	{Fs4, BPM85/2},

	{Bn3, BPM85/2}, 
	{Fs4, BPM85/2},
	{Bn4, BPM85/2},
	{Bn3, BPM85/2},
	{Fs4, BPM85/2},
	{Bn4, BPM85/2},
	{Bn3, BPM85/2},
	{Fs4, BPM85/2},

	//Segmento repetido 1
	{En4, BPM85/2}, 
	{Fs4, BPM85/2},
	{Bn4, BPM85/2},
	{En4, BPM85/2},
	{Fs4, BPM85/2},
	{Bn4, BPM85/2},
	{En4, BPM85/2},
	{Fs4, BPM85/2},

	{Dn4, BPM85/2}, 
	{Fs4, BPM85/2},
	{Bn4, BPM85/2},
	{Dn4, BPM85/2},
	{Fs4, BPM85/2},
	{Bn4, BPM85/2},
	{Dn4, BPM85/2},
	{Fs4, BPM85/2},

	{Cs4, BPM85/2}, 
	{Fs4, BPM85/2},
	{Cs5, BPM85/2},
	{Cs4, BPM85/2},
	{Fs4, BPM85/2},
	{Cs5, BPM85/2},
	{Cs4, BPM85/2},
	{Fs4, BPM85/2},

	{Bn3, BPM85/2}, 
	{Fs4, BPM85/2},
	{Bn4, BPM85/2},
	{Bn3, BPM85/2},
	{Fs4, BPM85/2},
	{Bn4, BPM85/2},
	{Bn3, BPM85/2},
	{Fs4, BPM85/2},

	//Segmento repetido 2
	{En4, BPM85/2}, 
	{Fs4, BPM85/2},
	{Bn4, BPM85/2},
	{En4, BPM85/2},
	{Fs4, BPM85/2},
	{Bn4, BPM85/2},
	{En4, BPM85/2},
	{Fs4, BPM85/2},

	{Dn4, BPM85/2}, 
	{Fs4, BPM85/2},
	{Bn4, BPM85/2},
	{Dn4, BPM85/2},
	{Fs4, BPM85/2},
	{Bn4, BPM85/2},
	{Dn4, BPM85/2},
	{Fs4, BPM85/2},

	{Cs4, BPM85/2}, 
	{Fs4, BPM85/2},
	{Cs5, BPM85/2},
	{Cs4, BPM85/2},
	{Fs4, BPM85/2},
	{Cs5, BPM85/2},
	{Cs4, BPM85/2},
	{Fs4, BPM85/2},

	{Bn3, BPM85/2}, 
	{Fs4, BPM85/2},
	{Bn4, BPM85/2},
	{Bn3, BPM85/2},
	{Fs4, BPM85/2},
	{Bn4, BPM85/2},
	{Bn3, BPM85*5}
};

const note SurfThemeMelody [] = {
	{164, 0},

	{Bb4, BPM160*3},

	{Cn5, BPM160*3}, 

	{Dn5, BPM160*2},
	{Eb5, BPM160},

	{Fn5, BPM160},
	{Gn5, BPM160},
	{Ab5, BPM160},

	/* Primer fragmento repetido */
	{Bb5, BPM160*4},

	{Ab5, BPM160},
	{Gn5, BPM160},

	{Gn5, BPM160*2},
	{Ab5, BPM160/2},
	{Gn5, BPM160/2},

	{Fn5, BPM160*2},
	{Bb4, BPM160},

	{Ab5, BPM160*4},

	{Gn5, BPM160},
	{Fn5, BPM160},

	{Fn5, BPM160*2},
	{Gn5, BPM160/2},
	{Fn5, BPM160/2},

	{Eb5, BPM160*2},
	{Fn5, BPM160},

	/* Segundo fragmento semi repetido */
	{Bb5, BPM160*4},

	{Ab5, BPM160},
	{Gn5, BPM160},

	{Gn5, BPM160*2},
	{Ab5, BPM160/2},
	{Gn5, BPM160/2},

	{Fn5, BPM160*2},
	{Bb4, BPM160},

	{Ab5, BPM160*4},

		//18
	{Gn5, BPM160},
	{Fn5, BPM160},

	{Fn5, BPM160*2},
	{Gn5, BPM160/2},
	{Fn5, BPM160/2},

	{Eb5, BPM160*2},
	{Eb6, BPM160},
	/*Final de fragmento*/

	{Cn6, BPM160*4},

	{Dn6, BPM160},
	{Eb6, BPM160},

	{Eb6, BPM160*2},
	{Dn6, BPM160/2},
	{Cn6, BPM160/2},

		//24
	{Dn5, BPM160*2},
	{Dn6, BPM160},

	{Bb5, BPM160*4},

	{Cn6, BPM160},
	{Dn6, BPM160},

	{Fn6, BPM160*2},
	{Eb6, BPM160/2},
	{Dn6, BPM160/2},
	
	{Eb6, BPM160*2},
	{Dn6, BPM160},

		//29
	{Cn6, BPM160*4},

	{Dn6, BPM160},
	{Eb6, BPM160},

	{Eb6, BPM160*2},
	{Dn6, BPM160/2},
	{Cn6, BPM160/2},

	{Dn5, BPM160*2},
	{Dn6, BPM160},

	{Bb5, BPM160*4},

		//34
	{Cn6, BPM160},
	{Dn6, BPM160},

	{Fn6, BPM160*3},

	{Gn6, BPM160*2},
	{Bb4, BPM160/2},
	{Dn5, BPM160/2},

	{Fn5, BPM160/2},
	{Eb5, BPM160/2},
	{Fn5, BPM160/2},
	{Gn5, BPM160*13/8},

	{Gb5, BPM160/8},
	{Fn5, BPM160/8},
	{En5, BPM160/8},
	{Eb5, BPM160/8},
	{Dn5, BPM160/8},
	{Db5, BPM160/8},
	{Cn5, BPM160/8},
	{Bb4, BPM160},
	{Cn5, BPM160},

	{Db5, BPM160*2},
	{Cn5, BPM160/2},
	{Bn4, BPM160/2},

		//40
	{Cn5, BPM160*2},
	{Gn5, BPM160},

	{Gn5, BPM160/2},
	{Fn5, BPM160/2},
	{Gn5, BPM160/2},
	{Ab5, BPM160*13/8},

	{Gn5, BPM160/8},
	{Gb5, BPM160/8},
	{Fn5, BPM160/8},
	{En5, BPM160/8},
	{Eb5, BPM160/8},
	{Dn5, BPM160/8},
	{Db5, BPM160/8},
	{Cn5, BPM160},
	{Gn5, BPM160/2},
	{Ab5, BPM160/2},

	{Bb5, BPM160},
	{Ab5, BPM160},
	{Eb5, BPM160},

	{Bn4, BPM160},
	{Ab4, BPM160},
	{Eb4, BPM160},

	{Bb4, BPM160/2},
	{An4, BPM160/2},
	{Bb4, BPM160/2},
	{Eb5, BPM160*13/8},

	{Dn5, BPM160/8},
	{Db5, BPM160/8},
	{Cn5, BPM160/8},
	{Bn4, BPM160/8},
	{Bb4, BPM160/8},
	{An4, BPM160/8},
	{Ab4, BPM160/8},
	{Gn4, BPM160},
	{Ab4, BPM160},

		//47
	{An4, BPM160/2},
	{Ab4, BPM160/2},
	{Gn4, BPM160/2},
	{Gb4, BPM160/2},
	{Fn4, BPM160/2},
	{En4, BPM160/2},

	{Gn4, BPM160},
	{Db4, BPM160},
	{Bb4, BPM160},

	{Bb4, BPM160/2},
	{Ab4, BPM160/2},
	{Cn5, BPM160/2},
	{Fn5, BPM160*13/8},

	{En5, BPM160/8},
	{Eb5, BPM160/8},
	{Dn5, BPM160/8},
	{Db5, BPM160/8},
	{Cn5, BPM160/8},
	{Bn4, BPM160/8},
	{Bb4, BPM160/8},
	{Ab4, BPM160},
	{Eb5, BPM160/2},
	{Bn4, BPM160/2},

	{Ab5, BPM160},
	{Eb5, BPM160},
	{Bn4, BPM160},

	{Eb4, BPM160*3},

	{Fn4, BPM160},
	{Eb4, BPM160},
	{Fn4, BPM160},

		//54
	{Ab4, BPM160},
	{Eb4, BPM160/2},
	{Ab4, BPM160/2},
	{Bn4, BPM160/2},
	{Eb5, BPM160/2},

	/*  FINAL EPICO */
	{Fn5, BPM160},
	{Gn5, BPM160},
	{Ab5, BPM160},

	{Bb5, BPM160},
	{Cn6, BPM160},
	{Dn6, BPM160},

	{Eb6, BPM160*4}
};

const note SurfThemeAccom [] = {
	{276, 0},
	//1
	{Fn4, BPM160/2},
	{Eb4, BPM160/2},
	{Fn4, BPM160/2},
	{Eb4, BPM160/2},
	{Ab4, BPM160/2},
	{Eb4, BPM160/2},

	//2
	{Fn4, BPM160/2},
	{Eb4, BPM160/2},
	{Fn4, BPM160/2},
	{Eb4, BPM160/2},
	{Ab4, BPM160/2},
	{Eb4, BPM160/2},

	//3
	{Fn4, BPM160/2},
	{Eb4, BPM160/2},
	{Fn4, BPM160/2},
	{Eb4, BPM160/2},
	{Bb4, BPM160/2},
	{Ab4, BPM160/2},

	//4
	{Fn4, BPM160/2},
	{Dn4, BPM160/2},
	{Bb3, BPM160/3},
	{Dn4, BPM160/3},
	{Fn4, BPM160/3},
	{Ab4, BPM160/3},
	{Bb4, BPM160/3},
	{Dn5, BPM160/3},

	//5
	{Eb5, BPM160},
	{Bb4, BPM160/2},
	{Eb5, BPM160/2},
	{Bb4, BPM160/2},
	{Eb5, BPM160/2},

	//6
	{S__, BPM160},
	{Bb4, BPM160/2},
	{Eb5, BPM160/2},
	{Bb4, BPM160/2},
	{Eb5, BPM160/2},

	//7
	{S__, BPM160},
	{Bb4, BPM160/2},
	{Db5, BPM160/2},
	{Bb4, BPM160/2},
	{Db5, BPM160/2},

	//8
	{S__, BPM160},
	{Bb4, BPM160/2},
	{Db5, BPM160/2},
	{Bb4, BPM160/2},
	{Db5, BPM160/2},

	//9
	{S__, BPM160},
	{Ab4, BPM160/2},
	{Cn5, BPM160/2},
	{Ab4, BPM160/2},
	{Cn5, BPM160/2},

	//10
	{S__, BPM160},
	{Ab4, BPM160/2},
	{Cn5, BPM160/2},
	{Ab4, BPM160/2},
	{Cn5, BPM160/2},

	//11
	{Bn4, BPM160*2},
	{Eb5, BPM160/2},
	{Bn4, BPM160/2},

	//12
	{Bb4, BPM160},
	{Fn4, BPM160},
	{Cs4, BPM160/2},
	{Dn4, BPM160/2},

	//13
	{Eb4, BPM160},
	{Bb4, BPM160/2},
	{Eb5, BPM160/2},
	{Bb4, BPM160/2},
	{Eb5, BPM160/2},

	//14
	{S__, BPM160},
	{Bb4, BPM160/2},
	{Eb5, BPM160/2},
	{Bb4, BPM160/2},
	{Eb5, BPM160/2},

	//15
	{S__, BPM160},
	{Bb4, BPM160/2},
	{Db5, BPM160/2},
	{Bb4, BPM160/2},
	{Db5, BPM160/2},

	//16
	{S__, BPM160},
	{Bb4, BPM160/2},
	{Db5, BPM160/2},
	{Bb4, BPM160/2},
	{Db5, BPM160/2},

	//17
	{S__, BPM160},
	{Ab4, BPM160/2},
	{Cn5, BPM160/2},
	{Ab4, BPM160/2},
	{Cn5, BPM160/2},

	//18
	{S__, BPM160},
	{Ab4, BPM160/2},
	{Cn5, BPM160/2},
	{Ab4, BPM160/2},
	{Cn5, BPM160/2},

	//19
	{Bn4, BPM160*2},
	{Eb5, BPM160/2},
	{Bn4, BPM160/2},

	//20
	{Bb4, BPM160*3},

	//21
	{Ab5, BPM160*2},
	{Eb5, BPM160/2},
	{Cn5, BPM160/2},

	//22
	{Ab4, BPM160/2},
	{Cn5, BPM160/2},
	{Dn5, BPM160/2},
	{Eb5, BPM160/2},
	{Gn5, BPM160/2},
	{Ab5, BPM160/2},

	//23
	{Bb5, BPM160/3},
	{Fn5, BPM160/3},
	{Dn5, BPM160/3},
	{Fn5, BPM160/3},
	{Dn5, BPM160/3},
	{Bb4, BPM160/3},
	{Dn5, BPM160/3},
	{Bb4, BPM160/3},
	{Fn4, BPM160/3},

	//24
	{Bb4, BPM160/3},
	{Fn4, BPM160/3},
	{Dn4, BPM160/3},
	{Bb3, BPM160/3},
	{Dn4, BPM160/3},
	{Fn4, BPM160/3},
	{Ab4, BPM160/3},
	{Bb4, BPM160/3},
	{Dn5, BPM160/3},

	//25
	{Dn5, BPM160*2},
	{Gn5, BPM160/2},
	{Dn5, BPM160/2},

	//26
	{Bb4, BPM160/2},
	{Dn5, BPM160/2},
	{Fn5, BPM160/2},
	{Gn5, BPM160/2},
	{Ab5, BPM160/2},
	{Bb5, BPM160/2},

	//27
	{Cn6, BPM160/3},
	{Gn5, BPM160/3},
	{Eb5, BPM160/3},
	{Gn5, BPM160/3},
	{Eb5, BPM160/3},
	{Cn5, BPM160/3},
	{Eb5, BPM160/3},
	{Cn5, BPM160/3},
	{Gn4, BPM160/3},

	//28
	{Cn5, BPM160/3},
	{Gn4, BPM160/3},
	{Eb4, BPM160/3},
	{Cn4, BPM160/3},
	{Eb4, BPM160/3},
	{Gn4, BPM160/3},
	{Cn5, BPM160/3},
	{Eb5, BPM160/3},
	{Gn5, BPM160/3},

	//29
	{Ab5, BPM160*2},
	{Eb5, BPM160/2},
	{Cn5, BPM160/2},

	//30
	{Ab4, BPM160/2},
	{Cn5, BPM160/2},
	{Dn5, BPM160/2},
	{Eb5, BPM160/2},
	{Gn5, BPM160/2},
	{Ab5, BPM160/2},

	//31
	{Bb5, BPM160/3},
	{Fn5, BPM160/3},
	{Dn5, BPM160/3},
	{Fn5, BPM160/3},
	{Dn5, BPM160/3},
	{Bb4, BPM160/3},
	{Dn5, BPM160/3},
	{Bb4, BPM160/3},
	{Fn4, BPM160/3},

	//32
	{Bb4, BPM160/3},
	{Fn4, BPM160/3},
	{Dn4, BPM160/3},
	{Bb3, BPM160/3},
	{Dn4, BPM160/3},
	{Fn4, BPM160/3},
	{Ab4, BPM160/3},
	{Cn5, BPM160/3},
	{Eb5, BPM160/3},

	//33
	{Dn5, BPM160*2},
	{Gn5, BPM160/2},
	{Dn5, BPM160/2},

	//34
	{Bb4, BPM160/2},
	{Dn5, BPM160/2},
	{Fn5, BPM160/2},
	{Gn5, BPM160/2},
	{Ab5, BPM160/2},
	{Bb5, BPM160/2},

	//35
	{Cn6, BPM160/3},
	{Gn5, BPM160/3},
	{Eb5, BPM160/3},
	{Gn5, BPM160/3},
	{Eb5, BPM160/3},
	{Cn5, BPM160/3},
	{Eb5, BPM160/3},
	{Cn5, BPM160/3},
	{Gn4, BPM160/3},

	//36
	{Ab4, BPM160},
	{An4, BPM160},
	{Bb4, BPM160/2},
	{Dn5, BPM160/2},

	//37
	{Bb4, BPM160/2},
	{An4, BPM160/2},
	{Bb4, BPM160/2},

	//38
	{Eb5, BPM160*5/2},
	{Gn4, BPM160},
	{Ab4, BPM160},

	//39
	{An4, BPM160/2},
	{Ab4, BPM160/2},
	{Gn4, BPM160/2},
	{Gb4, BPM160/2},
	{Fn4, BPM160/2},
	{En4, BPM160/2},

	//40
	{Gn4, BPM160},
	{Db4, BPM160},
	{Bb4, BPM160},

	//41
	{Bb4, BPM160/2},
	{Ab4, BPM160/2},
	{Cn5, BPM160/2},

	//42
	{Fn5, BPM160*5/2},
	{Ab4, BPM160},
	{Eb5, BPM160/2},
	{Bn4, BPM160/2},

	//43
	{Ab5, BPM160},
	{Eb5, BPM160},
	{Bn4, BPM160},

	//44
	{Eb4, BPM160},
	{Ab4, BPM160},
	{Eb5, BPM160},

	//45
	{Fn5, BPM160/2},
	{Eb5, BPM160/2},
	{Fn5, BPM160/2},

	//46
	{Gn5, BPM160*5/2},
	{Bb4, BPM160},
	{Cn5, BPM160},

	//47
	{Db5, BPM160*2},
	{Cn5, BPM160/2},
	{Bn4, BPM160/2},

	//48
	{Cn5, BPM160*2},
	{Gn5, BPM160},

	//49
	{Gn5, BPM160/2},
	{Fn5, BPM160/2},
	{Gn5, BPM160/2},

	//50
	{Ab5, BPM160*5/2},
	{Cn5, BPM160},
	{Gn5, BPM160/2},
	{Ab5, BPM160/2},

	//51
	{Bb5, BPM160},
	{Ab5, BPM160},
	{Eb5, BPM160},

	//52
	{Bn4, BPM160*3},

	//53
	{Bb4, BPM160},
	{Ab4, BPM160},
	{Eb4, BPM160},

	//54
	{Ab4, BPM160},
	{Bb4, BPM160},
	{Bn4, BPM160},

	//55
	{Dn5, BPM160*2},
	{Ab4, BPM160/2},
	{Fn4, BPM160/2},

	//56
	{Bb3, BPM160/3},
	{Dn4, BPM160/3},
	{Fn4, BPM160/3},
	{Dn4, BPM160/3},
	{Fn4, BPM160/3},
	{Bb4, BPM160/3},
	{Fn4, BPM160/3},
	{Bb4, BPM160/3},
	{Dn5, BPM160/3},

	//57
	{Eb5, BPM160},
	{Bb4, BPM160/2},
	{Eb5, BPM160/2},
	{Bb4, BPM160/2},
	{Eb5, BPM160/2},

	//58
	{Eb5, BPM160},
	{S__, BPM160*2}
};

const note SurfThemeBass [] = {
	{184, 0},

	{Bb2, BPM160},
	{Bb3, BPM160},
	{Bb3, BPM160},

	{Bb2, BPM160},
	{Bb3, BPM160},
	{Bb3, BPM160},
	
	{Bb2, BPM160},
	{Bb3, BPM160},
	{Bb3, BPM160},

	{Bb2, BPM160},
	{Fn3, BPM160},
	{Bb3, BPM160},
		//
	{Eb3, BPM160},
	{Gn3, BPM160/2},
	{Ab3, BPM160/2},
	{Bb3, BPM160},

	// 6
	{Eb3, BPM160},
	{Gn3, BPM160/2},
	{Ab3, BPM160/2},
	{Bb3, BPM160},
		//
	{Db3, BPM160},
	{Gn3, BPM160/2},
	{Ab3, BPM160/2},
	{Bb3, BPM160},

	{Db3, BPM160},
	{Gn3, BPM160/2},
	{Ab3, BPM160/2},
	{Bb3, BPM160},
		//
	{Cn3, BPM160},
	{Fn3, BPM160/2},
	{Gn3, BPM160/2},
	{Ab3, BPM160},

	{Cn3, BPM160},
	{Fn3, BPM160/2},
	{Gn3, BPM160/2},
	{Ab3, BPM160},
		//
	{Bn2, BPM160},
	{Fn3, BPM160/2},
	{Gn3, BPM160/2},
	{Ab3, BPM160/2},
	{Bb3, BPM160/2},

	//12
	{Bn3, BPM160},
	{Bb3, BPM160},
	{Ab3, BPM160},
		//
	{Eb3, BPM160},
	{Gn3, BPM160/2},
	{Ab3, BPM160/2},
	{Bb3, BPM160},

	{Eb3, BPM160},
	{Gn3, BPM160/2},
	{Ab3, BPM160/2},
	{Bb3, BPM160},
		//
	{Db3, BPM160},
	{Gn3, BPM160/2},
	{Ab3, BPM160/2},
	{Bb3, BPM160},

	{Db3, BPM160},
	{Gn3, BPM160/2},
	{Ab3, BPM160/2},
	{Bb3, BPM160},
		//
	{Cn3, BPM160},
	{Fn3, BPM160/2},
	{Gn3, BPM160/2},
	{Ab3, BPM160},

	//18
	{Cn3, BPM160},
	{Fn3, BPM160/2},
	{Gn3, BPM160/2},
	{Ab3, BPM160},
		//
	{Bn2, BPM160},
	{Fn3, BPM160/2},
	{Gn3, BPM160/2},
	{Ab3, BPM160/2},
	{Bb3, BPM160/2},

	{Bn3, BPM160},
	{Bb3, BPM160},
	{Ab3, BPM160},

	{Ab2, BPM160},
	{Fn4, BPM160},
	{Eb4, BPM160},

	{Ab2, BPM160},
	{Eb4, BPM160},
	{Dn4, BPM160},

	{Bb2, BPM160},
	{Cn4, BPM160},
	{Bb3, BPM160},

	//24
	{Bb2, BPM160},
	{Ab3, BPM160},
	{Bb3, BPM160},

	{Gn2, BPM160},
	{Dn4, BPM160},
	{Cn4, BPM160},

	{Gn2, BPM160},
	{Bb3, BPM160},
	{Gn3, BPM160},

	{Cn3, BPM160},
	{Fn4, BPM160},
	{Gn4, BPM160},

	{Eb4, BPM160},
	{Dn4, BPM160},
	{Cn4, BPM160},

	//29
	{Ab2, BPM160},
	{Fn4, BPM160},
	{Eb4, BPM160},

	{Ab2, BPM160},
	{Eb4, BPM160},
	{Dn4, BPM160},

	{Bb2, BPM160},
	{Cn4, BPM160},
	{Bb3, BPM160},

	{Bb2, BPM160},
	{Ab3, BPM160},
	{Bb3, BPM160},

	{Gn2, BPM160},
	{Dn4, BPM160},
	{Cn4, BPM160},

	//34
	{Gn2, BPM160},
	{Bb3, BPM160},
	{Gn3, BPM160},

	{Cn3, BPM160},
	{Fn4, BPM160},
	{Gn4, BPM160},

	{Ab4, BPM160},
	{An4, BPM160},
	{Bb2, BPM160},
	
	/* Incia seccion arpegio */
	{Eb3, BPM160},
	{Gn3, BPM160},
	{Bb3, BPM160},

	{Eb3, BPM160},
	{Gn3, BPM160},
	{Bb3, BPM160},
		//
	{Db3, BPM160},
	{Gn3, BPM160},
	{Bb3, BPM160},

	//40
	{Db3, BPM160},
	{Gn3, BPM160},
	{Bb3, BPM160},
		//
	{Cn3, BPM160},
	{Fn3, BPM160},
	{Ab3, BPM160},

	{Cn3, BPM160},
	{Fn3, BPM160},
	{Ab3, BPM160},
		//
	{Bn2, BPM160},
	{Eb3, BPM160},
	{Fn3, BPM160},

	{Ab3, BPM160},
	{Bb3, BPM160},
	{Bn3, BPM160},
		//
	{Eb3, BPM160},
	{Gn3, BPM160},
	{Bb3, BPM160},

	{Eb3, BPM160},
	{Gn3, BPM160},
	{Bb3, BPM160},
		//
	//47
	{Db3, BPM160},
	{Gn3, BPM160},
	{Bb3, BPM160},

	{Db3, BPM160},
	{Gn3, BPM160},
	{Bb3, BPM160},
		//
	{Cn3, BPM160},
	{Fn3, BPM160},
	{Ab3, BPM160},

	{Cn3, BPM160},
	{Fn3, BPM160},
	{Ab3, BPM160},
		//
	{Bb2, BPM160},
	{Eb3, BPM160},
	{Ab3, BPM160},

	{Bn3, BPM160*3},

	{Bn2, BPM160*3},

	//54
	{Eb3, BPM160*2},
	{Bn2, BPM160},

	/* FINAL */
	{Bb2, BPM160},
	{Bb3, BPM160},
	{Bb3, BPM160},

	{Bb2, BPM160},
	{Dn3, BPM160},
	{Fn3, BPM160},

	{Eb3, BPM160},
	{Gn3, BPM160},
	{Bb3, BPM160},

	{Eb3, BPM160}

};

const note * songsTable[][3] = {
	//R, L, Twitter
	{TestR, TestL, TestC},
	{KessonDalekMelody, KessonDalekAccom, KessonDalekMelody},
	{SurfThemeMelody, SurfThemeBass, SurfThemeAccom}
};
