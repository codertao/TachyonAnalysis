
/* refine: plane-cull (Cull_SphereClip), root part then child parts (flags 0x84 = hidden) with
   attach-point placement */

void Model_DrawMultiPart(uint *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((DAT_00668f34 == 0) || (iVar1 = Cull_SphereClip(param_1), iVar1 != 0)) {
    puVar3 = (undefined4 *)(*(int *)(param_2 + 8) + param_2);
    if ((code *)param_1[0x11] == (code *)0x0) {
      if ((*param_1 & 0x400) != 0) {
        Model_UpdateState(param_1,0,puVar3,*(undefined4 *)(param_2 + 4));
      }
    }
    else {
      (*(code *)param_1[0x11])(param_1,puVar3,0,*(undefined4 *)(param_2 + 4));
    }
    Model_BuildRotScale(param_1,puVar3);
    if ((*(byte *)(puVar3 + 4) & 0x84) == 0) {
      Mesh_TransformVerts(param_1,puVar3,*puVar3);
      Mesh_ShadeAndSubmit(param_1,*puVar3);
    }
    Part_PlaceChildren(puVar3,param_1 + 10);
    uVar2 = 0;
    if (*(int *)(param_2 + 4) != 1) {
      do {
        puVar4 = puVar3 + 0xb;
        Part_ComputeTransform(param_1,puVar4);
        if ((*(byte *)(puVar3 + 0xf) & 0x84) == 0) {
          SubPart_TransformVerts(param_1,puVar4);
          Mesh_ShadeAndSubmit(param_1,*puVar4);
        }
        uVar2 = uVar2 + 1;
        puVar3 = puVar4;
      } while (uVar2 < *(int *)(param_2 + 4) - 1U);
    }
  }
  return;
}

