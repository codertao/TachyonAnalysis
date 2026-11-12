
/* refine: LOD0 part[i].flags |= bits (0x40 no-rot, 0x84 hidden, 0x200 roll-only) */

void Model_SetPartFlags(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x40) != 0)) {
    iVar2 = Model_GetLod0Mesh(*(int *)(param_1 + 0x40));
    if (param_3 < *(uint *)(iVar2 + 4)) {
      puVar1 = (uint *)(iVar2 + param_3 * 0x2c + 0x1c);
      *puVar1 = *puVar1 | param_2;
    }
  }
  return;
}

