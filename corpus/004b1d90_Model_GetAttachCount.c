
/* refine: root mesh attach point count (+0x38) */

undefined4 Model_GetAttachCount(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = Model_GetLod0Mesh(param_1);
  return *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x38);
}

