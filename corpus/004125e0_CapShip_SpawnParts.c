
/* one server DCB (AI pool) per OCF part (0x80 records), chained via +0xe0 */

void CapShip_SpawnParts(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = 0;
  iVar3 = 0;
  if (param_1 != (uint *)0x0) {
    uVar4 = param_1[1];
    uVar2 = 0;
    if (*param_1 != 0) {
      do {
        iVar1 = CapShip_SpawnPart(param_2,uVar4,param_3,param_4,iVar1,iVar3);
        if (iVar3 == 0) {
          iVar3 = iVar1;
        }
        uVar2 = uVar2 + 1;
        uVar4 = uVar4 + 0x80;
      } while (uVar2 < *param_1);
    }
  }
  return;
}

