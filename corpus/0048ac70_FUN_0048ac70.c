
void FUN_0048ac70(void)

{
  int iVar1;
  
  DAT_0056c350 = DAT_0056c2c8;
  DAT_0056c354 = DAT_0056c2cc;
  DAT_0056c358 = DAT_0056c2d0;
  call_Vec_Normalize((vec3 *)&DAT_0056c350);
  iVar1 = FUN_004e058e(&DAT_0056c350,&DAT_00559820);
  DAT_0056c35c = (uint)((longlong)iVar1 * (longlong)DAT_0056c36c) >> 0x10 |
                 (int)((ulonglong)((longlong)iVar1 * (longlong)DAT_0056c36c) >> 0x20) << 0x10;
  return;
}

