
char * FUN_0043b7f0(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  for (pcVar2 = *(char **)(param_1 + 8); (pcVar2 != (char *)0x0 && (*pcVar2 != '\0'));
      pcVar2 = pcVar2 + 0x48) {
    iVar1 = FUN_004c67c0(pcVar2,param_2);
    if (iVar1 == 0) {
      return pcVar2;
    }
  }
  return (char *)0x0;
}

