
void __cdecl FUN_100045c0(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  char *pcVar1;
  
  pcVar1 = DAT_10019c5c;
  pcVar1[0] = 'A';
  pcVar1[1] = '\x10';
  pcVar1[2] = '\b';
  pcVar1[3] = '\0';
  *(undefined4 *)(pcVar1 + 4) = param_1;
  ns_SendTo(DAT_10019c5c,8,param_2,param_3);
  return;
}

