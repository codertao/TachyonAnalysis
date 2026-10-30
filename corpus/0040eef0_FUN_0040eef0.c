
void FUN_0040eef0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined1 local_18 [24];
  
  local_28 = 0x10000;
  local_20 = 0x10000;
  local_30 = 0;
  local_2c = 0;
  local_24 = 0;
  local_1c = 0;
  FUN_0052db6a(local_18,*param_3,param_3[1],param_3[2]);
  FUN_0052dbcd(local_18);
  FUN_004b24d0(&local_30,&local_30);
  FUN_004b24d0(&local_24,&local_24);
  FUN_0052db6a(local_18,-*param_2,-param_2[1],-param_2[2]);
  FUN_0052dbcd(local_18);
  FUN_004b2410(&local_30,&local_30);
  FUN_004b2410(&local_24,&local_24);
  iVar1 = FUN_004e086c(local_30,-local_28);
  FUN_0052db6a(local_18,iVar1,0,0);
  FUN_0052dbcd(local_18);
  FUN_0052dc22(&local_30,&local_30);
  FUN_0052dc22(&local_24,&local_24);
  iVar2 = FUN_004e086c(local_2c,-local_28);
  FUN_0052db6a(local_18,0,iVar2,0);
  FUN_0052dbcd(local_18);
  FUN_0052dccb(&local_24,&local_24);
  iVar3 = FUN_004e086c(local_24,-local_20);
  param_1[1] = iVar2 * -0x80 >> 7;
  *param_1 = iVar1 * -0x80 >> 7;
  param_1[2] = (iVar3 << 7) >> 7;
  return;
}

