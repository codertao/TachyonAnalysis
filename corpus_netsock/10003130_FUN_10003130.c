
void FUN_10003130(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_10019c5c;
  pcVar1[0] = '2';
  pcVar1[1] = '\x10';
  pcVar1[2] = '\b';
  pcVar1[3] = '\0';
  *(undefined4 *)(pcVar1 + 4) = DAT_10019c04;
  ns_SendDatagram(DAT_10019c5c,8,DAT_100199b4);
  return;
}

