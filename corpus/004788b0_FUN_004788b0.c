
void FUN_004788b0(void)

{
  char *pcVar1;
  char *pcVar2;
  
  if (s_BtnJob0_00550b08[0] != '\0') {
    pcVar2 = s_IAJob0_00550b48;
    do {
      FUN_0043ce50(&DAT_00583420,pcVar2 + -0x40,8);
      FUN_0043e6a0(&DAT_00583420,pcVar2 + 0x40,&DAT_00562b14);
      FUN_0043e6a0(&DAT_00583420,pcVar2 + 0xc0,&DAT_00562b14);
      FUN_0043f620(&DAT_00583420,pcVar2,0x20000);
      FUN_0043f840(&DAT_00583420,pcVar2,0x80000);
      pcVar1 = pcVar2 + 0x504;
      pcVar2 = pcVar2 + 0x544;
    } while (*pcVar1 != '\0');
  }
  return;
}

