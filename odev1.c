#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
  int k_kontrol,h_kontrol;
  char buf[128]={};
  size_t icerikSize,readSize;
  char kaynak[300],hedef[300];
  printf("kaynak dosya adını girin:");
  scanf("%s",kaynak);
  printf("Hedef dosya adını girin:");
  scanf("%s",hedef);
  k_kontrol=open(hedef,O_RDONLY);
  if(k_kontrol==-1){
    perror("dosya açılamadı");
    return EXIT_FAILURE;}
  icerikSize=sizeof(buf);
  readSize=read(k_kontrol,buf,icerikSize);
  if((h_kontrol=open(hedef,O_WRONLY))==-1){
    perror("dosya açılamadı");
    return EXIT_FAILURE;}
    if((write(h_kontrol,buf,strlen(buf)))==-1)
      perror("kopyalama hatası");
    else
      perror("kopyalama hatası");
     return 0;
}
