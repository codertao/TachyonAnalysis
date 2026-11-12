
/* sweep */

bool Cd_VolumeMatches(LPCSTR param_1,undefined4 param_2)

{
  UINT uMode;
  int iVar1;
  DWORD local_20c;
  DWORD local_208;
  DWORD local_204;
  CHAR local_200 [256];
  CHAR local_100 [256];
  
  uMode = SetErrorMode(1);
  GetVolumeInformationA(param_1,local_100,0x100,&local_20c,&local_204,&local_208,local_200,0x100);
  SetErrorMode(uMode);
  __stricmp(local_200,&DAT_0053f30c);
  iVar1 = __stricmp(local_100,param_2);
  return iVar1 == 0;
}

