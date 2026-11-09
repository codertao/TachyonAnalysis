
void __cdecl
FUN_10004190(undefined4 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  
  pcVar1 = DAT_10019c5c;
  pcVar1[0] = '1';
  pcVar1[1] = '\x10';
  pcVar1[2] = '\f';
  pcVar1[3] = '\0';
  *(undefined4 *)(pcVar1 + 4) = param_3;
  *(undefined4 *)(pcVar1 + 8) = param_4;
  FUN_10005240(DAT_10019c5c,0xc,param_1,param_2);
  return;
}

