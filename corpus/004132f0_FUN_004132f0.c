
void FUN_004132f0(int param_1,int param_2)

{
  vec3 *pvVar1;
  int iVar2;
  vec3 vStack_c;
  
  pvVar1 = (vec3 *)(param_2 + 0x34);
  iVar2 = Coll_SegmentVsModel(pvVar1,(vec3 *)(param_1 + 0x34),param_1 + 0x18,&vStack_c,0,0);
  if (iVar2 != 0) {
    Model_LocalToWorld(param_1 + 0x18,&vStack_c);
    distance_between(pvVar1,&vStack_c);
    return;
  }
  distance_between(pvVar1,(vec3 *)(param_1 + 0x34));
  return;
}

