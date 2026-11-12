
/* refine: Part_ComputeWorldTransform for every LOD0 part */

void Ent_UpdatePartTransforms(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = Model_GetLod0Mesh(*(undefined4 *)(param_1 + 0x40));
  if (iVar1 != 0) {
    uVar2 = 0;
    iVar3 = iVar1 + 0xc;
    if (*(int *)(iVar1 + 4) != 0) {
      do {
        Part_ComputeWorldTransform(param_1,iVar3,uVar2);
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x2c;
      } while (uVar2 < *(uint *)(iVar1 + 4));
    }
  }
  return;
}

