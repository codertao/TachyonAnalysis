
/* sweep */

void Input_ProcessPressBindings(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  while( true ) {
    if (param_1 == 0) {
      return;
    }
    piVar3 = *(int **)(param_1 + 0xc);
    if (piVar3 != (int *)0x0) {
      for (piVar1 = (int *)*piVar3; (piVar1 != (int *)0x0 && (*piVar1 != 0));
          piVar1 = (int *)*piVar1) {
        iVar2 = piVar1[2];
        if (iVar2 != -1) {
          if (((&DAT_0053cb30)[iVar2] & DAT_005640c0) == 0) {
            if (((*(byte *)(piVar1 + 6) & 2) != 0) && ((&DAT_005aef54)[iVar2] != 0)) {
              (*(code *)piVar1[4])(piVar1[5],0,DAT_005b3304 - (&DAT_005aef54)[iVar2]);
              (&DAT_005aeed4)[iVar2] = 0;
            }
            (&DAT_005aef54)[iVar2] = 0;
          }
          else {
            if ((&DAT_005aef54)[iVar2] == 0) {
              (&DAT_005aef54)[iVar2] = DAT_005b3304;
              (&DAT_005aeed4)[iVar2] = *piVar3;
            }
            (**(code **)(*piVar3 + 0x10))
                      (*(undefined4 *)(*piVar3 + 0x14),1,DAT_005b3304 - (&DAT_005aef54)[iVar2]);
          }
        }
        piVar1 = piVar3 + 1;
        piVar3 = piVar3 + 1;
      }
    }
    if (*(int *)(param_1 + 0x1c) != 0) break;
    param_1 = *(int *)(param_1 + 0x14);
  }
  return;
}

