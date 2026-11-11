
void __cdecl
FUN_10003f80(undefined2 param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4)

{
  char *pcVar1;
  
  pcVar1 = DAT_10019c5c;
  pcVar1[0] = '!';
  pcVar1[1] = '\x10';
  pcVar1[2] = '\f';
  pcVar1[3] = '\0';
  *(undefined2 *)(pcVar1 + 4) = param_1;
  *(undefined2 *)(pcVar1 + 6) = param_2;
  if (DAT_10019b00 == 0) {
    pcVar1[8] = -1;
    pcVar1[9] = -1;
    pcVar1[10] = -1;
    pcVar1[0xb] = -1;
  }
  else {
    *(undefined4 *)(pcVar1 + 8) = *(undefined4 *)(DAT_10019b00 + 0xa0);
  }
  ns_SendTo(DAT_10019c5c,0xc,param_3,param_4);
  return;
}

