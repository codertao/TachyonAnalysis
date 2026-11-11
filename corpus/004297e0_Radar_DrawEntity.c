
/* radar blip: rotate offset to ship space, project x/z,y/z (direction only; distance unused) */

void Radar_DrawEntity(SpED *self)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 uStack_14;
  undefined4 uStack_10;
  vec3 vStack_c;
  
  if ((*(int *)&self->field_0x8c != 0) &&
     ((pcVar1 = *(code **)(*(int *)&self->field_0x8c + 0x5c), pcVar1 == (code *)0x0 ||
      (iVar2 = (*pcVar1)(self), iVar2 != 0)))) {
    distance_between(&self->position,(vec3 *)(GLBL_SOME_CONTEXT + 0x34));
    vStack_c.x = (self->position).x - *(int *)(GLBL_SOME_CONTEXT + 0x34);
    vStack_c.y = (self->position).y - *(int *)(GLBL_SOME_CONTEXT + 0x38);
    vStack_c.z = (self->position).z - *(int *)(GLBL_SOME_CONTEXT + 0x3c);
    FUN_004b2410(&vStack_c,&vStack_c);
    pcVar1 = *(code **)(*(int *)&self->field_0x8c + 0x74);
    if (pcVar1 == (code *)0x0) {
      uVar3 = FUN_00429750(self->field_0xc2);
    }
    else {
      uVar3 = (*pcVar1)(self,0);
    }
    bVar4 = self == *(SpED **)(GLBL_SOME_CONTEXT + 0x90);
    if (-1 < vStack_c.z) {
      Radar_Project(&vStack_c,&uStack_14);
      Radar_PlotFront(uStack_14,uStack_10,uVar3,bVar4);
      return;
    }
    vStack_c.z = -vStack_c.z;
    Radar_Project(&vStack_c,&uStack_14);
    Radar_PlotRear(uStack_14,uStack_10,uVar3,bVar4);
  }
  return;
}

