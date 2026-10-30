
void __fastcall FUN_004e047c(undefined4 param_1,undefined4 param_2)

{
  int *in_EAX;
  int iVar1;
  
  iVar1 = FUN_004e0417(param_2);
  *in_EAX = (int)(CONCAT44(*in_EAX >> 0x10,*in_EAX << 0x10) / (longlong)iVar1);
  in_EAX[1] = (int)(CONCAT44(in_EAX[1] >> 0x10,in_EAX[1] << 0x10) / (longlong)iVar1);
  in_EAX[2] = (int)(CONCAT44(in_EAX[2] >> 0x10,in_EAX[2] << 0x10) / (longlong)iVar1);
  return;
}

