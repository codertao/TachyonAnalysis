
/* sweep: guess */

void KeyRepeat_Fire(int *param_1,undefined4 param_2,short param_3,short param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)param_3;
  iVar3 = (int)param_4;
  iVar4 = param_1[3];
  *param_1 = iVar2;
  param_1[1] = iVar3;
  if (param_1[6] != 1) {
    iVar1 = 0;
    if (0 < param_1[2]) {
      do {
        if ((((*(int *)(iVar4 + 8) <= iVar2) && (iVar2 <= *(int *)(iVar4 + 0x10))) &&
            (*(int *)(iVar4 + 0xc) <= iVar3)) &&
           ((iVar3 <= *(int *)(iVar4 + 0x14) && (*(int *)(iVar4 + 0x88) != 0)))) {
          if (iVar4 != param_1[5]) {
            KeyRepeat_FindSlot(iVar4,0x2000);
            if (param_1[5] != 0) {
              KeyRepeat_FindSlot(param_1[5],0x1000);
            }
            param_1[5] = iVar4;
          }
          KeyRepeat_FindSlot(iVar4,param_2);
          return;
        }
        iVar4 = *(int *)(iVar4 + 0x1c);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1[2]);
    }
  }
  return;
}

