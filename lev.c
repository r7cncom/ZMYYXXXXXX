static u8 Dec_To_Ascii(u16 source,u8* buf){
	u8 length=1,i;
	u16 source_temp;
	
	source_temp=source;
	
	while(source_temp/10 > 0){
		length++;
		source_temp/=10;
	}
	for(i=length;i>0;i--){
		buf[i-1]=((source%10)+0x30);
		source/=10;
	}

	return length;
}


static u8 Ascii_To_Dec(u8* buf,u16 source){
	u8 length=1,i;
	u16 source_temp;
	
	source_temp=source;
	
	while(buf[i]){
		length++;
//		source_temp/=10;
	}
	for(i=0;i<length;i++){
		source=buf[i]-0x30;
		source+=source;
	}

	return length;
}
