
/* sweep: guess */

void Tractor_Init(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  *(code **)(param_1 + 0x68) = Tractor_ThinkGrow;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0x1000;
  *(undefined1 **)(param_1 + 0x84) = &LAB_00498120;
  iVar2 = param_1;
  do {
    iVar1 = Tractor_SpawnParticle(param_1,param_2,uVar3);
    *(int *)(iVar2 + 0xdc) = iVar1;
    if (iVar1 == 0) {
      return;
    }
    uVar3 = uVar3 + 1;
    iVar2 = iVar1;
  } while (uVar3 < 3);
  return;
}

