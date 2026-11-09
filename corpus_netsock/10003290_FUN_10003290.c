
void FUN_10003290(void)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  iVar1 = FUN_10003c00((undefined4 *)DAT_10019c5c,&local_4,(undefined4 *)&DAT_10019c38,&local_8,
                       &local_c);
  while (iVar1 != 0) {
    FUN_10005240(DAT_10019c5c,local_4,local_8,(short)local_c);
    iVar1 = FUN_10003c00((undefined4 *)DAT_10019c5c,&local_4,(undefined4 *)&DAT_10019c38,&local_8,
                         &local_c);
  }
  return;
}

