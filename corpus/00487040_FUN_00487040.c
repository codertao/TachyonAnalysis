
int FUN_00487040(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_c [3];
  
  local_c[0] = param_1;
  local_c[2] = param_3;
  piVar4 = &DAT_00557b70;
  local_c[1] = param_2;
  iVar1 = DAT_00557b70;
  do {
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = 0;
    piVar5 = local_c;
    piVar3 = piVar4;
    while( true ) {
      piVar3 = piVar3 + 1;
      if ((*piVar3 != 0) && (*piVar3 != *piVar5)) break;
      uVar2 = uVar2 + 1;
      piVar5 = piVar5 + 1;
      if (2 < uVar2) {
        piVar4[4] = piVar4[4] + 1;
        return *piVar4;
      }
    }
    iVar1 = piVar4[5];
    piVar4 = piVar4 + 5;
  } while( true );
}

