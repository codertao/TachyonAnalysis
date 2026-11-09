
void __cdecl FUN_10004250(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_10019c5c;
  *(undefined2 *)DAT_10019c5c = 0x1050;
  *(undefined2 *)((int)puVar1 + 2) = 8;
  puVar1[1] = param_1;
  FUN_10004220(puVar1,8,0,0);
  return;
}

