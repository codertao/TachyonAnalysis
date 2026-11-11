
/* canonical ship physics think (DCB +0x68): Entity_TurnToward(desiredOrient+0xdc), staggered turn
   control (0x4241c0, afterburner gate +0x338&1, drain energy +0x124), Dcb_WorldDelta, then
   integrate orientation+=angVel(+0xac) and pos+=worldPosDelta(+0xa0). Tail entry LAB_004039c0 =
   integrate-only */

void Dcb_Think_Ship(SpED *param_1)

{
  int *piVar1;
  byte bVar2;
  Desc *pDVar3;
  Desc *pDVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  short sVar11;
  
  pDVar3 = param_1->desc;
  Entity_TurnToward(param_1,(vec3 *)&param_1[1].next,(ShipFlight *)(pDVar3 + 1),
                    (byte)*(undefined4 *)&param_1[3].field_0xbc);
  pDVar4 = param_1->desc;
  if (((param_1[3].vel.y ^ DAT_005897e4) & 0xf) == 0) {
    uVar10 = *(uint *)&param_1[3].field_0xbc & 1;
    if (uVar10 == 0) {
      sVar11 = *(short *)((int)&param_1[3].qNext2 + 2);
    }
    else {
      sVar11 = *(short *)((int)&param_1[3].qNext2 + 2) >> 1;
    }
    if ((((*(char *)((int)&param_1[3].vel.z + 3) == '\0') || (pDVar4[1].notify == (void *)0x0)) ||
        (uVar10 != 0)) || (param_1[1].ang.y < *(int *)&pDVar4[2].field_0x10)) {
      Entity_ApplyTurnControl
                (0,(float)param_1[1].pool,(float *)&param_1[1].linked,(ShipFlight *)(pDVar4 + 1),
                 (int)sVar11,(PowerBlock *)&param_1[1].pos.y,(uint)pDVar3[10].construct & 0x400,
                 1.4013e-45);
      param_1->throttle = (byte)((uint)(int)sVar11 >> 3);
      *(undefined1 *)((int)&param_1[3].vel.z + 3) = 0;
    }
    else {
      Entity_ApplyTurnControl
                (0,(float)param_1[1].pool,(float *)&param_1[1].linked,(ShipFlight *)(pDVar4 + 1),-1,
                 (PowerBlock *)&param_1[1].pos.y,(uint)pDVar3[10].construct & 0x400,1.4013e-45);
      param_1->throttle = 0xff;
    }
  }
  Dcb_WorldDelta(param_1);
  iVar5 = (param_1->vel).x;
  iVar6 = (param_1->ang).x;
  iVar7 = (param_1->angVel).x;
  (param_1->pos).y = (param_1->pos).y + (param_1->vel).y;
  iVar8 = (param_1->vel).z;
  iVar9 = (param_1->angVel).z;
  (param_1->pos).x = (param_1->pos).x + iVar5;
  iVar5 = (param_1->ang).y;
  (param_1->pos).z = (param_1->pos).z + iVar8;
  iVar8 = (param_1->angVel).y;
  bVar2 = param_1->throttle;
  (param_1->ang).x = iVar6 + iVar7;
  (param_1->ang).y = iVar5 + iVar8;
  (param_1->ang).z = (param_1->ang).z + iVar9;
  if (bVar2 == 0xff) {
    piVar1 = &param_1[1].ang.y;
    *piVar1 = *piVar1 - *(int *)&pDVar4[2].field_0x10;
    if (*piVar1 < 0) {
      param_1[1].ang.y = 0;
    }
  }
  return;
}

