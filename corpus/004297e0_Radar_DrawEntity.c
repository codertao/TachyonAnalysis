
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
  
  if ((self->desc != (Desc *)0x0) &&
     ((pcVar1 = self->desc->radarVisible, pcVar1 == (code *)0x0 ||
      (iVar2 = (*pcVar1)(self), iVar2 != 0)))) {
    distance_between(&self->pos,(vec3 *)(GLBL_SOME_CONTEXT + 0x34));
    vStack_c.x = (self->pos).x - *(int *)(GLBL_SOME_CONTEXT + 0x34);
    vStack_c.y = (self->pos).y - *(int *)(GLBL_SOME_CONTEXT + 0x38);
    vStack_c.z = (self->pos).z - *(int *)(GLBL_SOME_CONTEXT + 0x3c);
    Rot_ApplyCurrent(&vStack_c,&vStack_c);
    pcVar1 = self->desc->radarColour;
    if (pcVar1 == (code *)0x0) {
      uVar3 = Hud_TeamColorIndex(self->team);
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

