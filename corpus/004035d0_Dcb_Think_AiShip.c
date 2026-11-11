
/* AI/drone ship think (DCB +0x68, installed by 0x4036f0): Entity_ApproachVelocity + staggered turn
   FX + Dcb_WorldDelta + Euler integrate */

void Dcb_Think_AiShip(SpED *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  Entity_TurnToward(param_1,(vec3 *)&param_1[1].next,(ShipFlight *)(param_1->desc + 1),
                    (byte)*(undefined4 *)&param_1[3].field_0xbc);
  uVar1 = param_1[3].vel.y;
  *(undefined1 *)((int)&param_1[3].vel.z + 2) = 0;
  *(undefined2 *)((int)&param_1[3].qNext2 + 2) = 0;
  *(undefined1 *)((int)&param_1[3].vel.z + 3) = 0;
  if (((uVar1 ^ DAT_005897e4) & 0xf) == 0) {
    Entity_ApplyTurnControl
              (0,(float)param_1[1].pool,(float *)&param_1[1].linked,
               (ShipFlight *)(param_1->desc + 1),0,(PowerBlock *)&param_1[1].pos.y,0,1.4013e-45);
    param_1->throttle = (byte)((int)(uint)*(ushort *)((int)&param_1[3].qNext2 + 2) >> 3);
  }
  Dcb_WorldDelta(param_1);
  (param_1->pos).x = (param_1->pos).x + (param_1->vel).x;
  iVar2 = (param_1->ang).x;
  (param_1->pos).y = (param_1->pos).y + (param_1->vel).y;
  iVar3 = (param_1->ang).y;
  (param_1->pos).z = (param_1->pos).z + (param_1->vel).z;
  (param_1->ang).x = iVar2 + (param_1->angVel).x;
  (param_1->ang).y = iVar3 + (param_1->angVel).y;
  (param_1->ang).z = (param_1->ang).z + (param_1->angVel).z;
  Dcb_SetRangeFlags((PowerBlock *)&param_1[1].pos.y,&param_1->desc[1].getText,param_1);
  return;
}

