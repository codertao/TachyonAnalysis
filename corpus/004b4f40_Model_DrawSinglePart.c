
/* refine: depth/frustum cull (Cull_SphereSimple), state anim, Model_BuildRotScale, transform verts,
   shade+submit */

void Model_DrawSinglePart(uint *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((DAT_00668f34 == 0) || (iVar1 = Cull_SphereSimple(param_1), iVar1 != 0)) {
    puVar2 = (undefined4 *)(*(int *)(param_2 + 8) + param_2);
    if ((code *)param_1[0x11] == (code *)0x0) {
      if ((*param_1 & 0x400) != 0) {
        Model_UpdateState(param_1,0,puVar2,1);
      }
    }
    else {
      (*(code *)param_1[0x11])(param_1,puVar2,0,1);
    }
    Model_BuildRotScale(param_1,puVar2);
    Mesh_TransformVerts(param_1,puVar2,*puVar2);
    Mesh_ShadeAndSubmit(param_1,*puVar2);
  }
  return;
}

