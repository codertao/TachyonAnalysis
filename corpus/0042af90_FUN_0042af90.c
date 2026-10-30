
char * FUN_0042af90(int param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined4 *puVar3;
  
  pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x4c);
  if (pcVar1 != (code *)0x0) {
    pcVar2 = (char *)(*pcVar1)(param_1,4,0);
    if (pcVar2 != (char *)0x0) {
      if (*pcVar2 != '\0') {
        puVar3 = (undefined4 *)FUN_0049e0d0(DAT_005a6140,s_AFFILIATION_00536780,pcVar2);
        if (puVar3 != (undefined4 *)0x0) {
          return (char *)*puVar3;
        }
      }
      return pcVar2;
    }
  }
  return (char *)0x0;
}

