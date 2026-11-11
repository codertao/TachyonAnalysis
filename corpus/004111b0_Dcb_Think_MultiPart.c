
/* multi-part/parented entity think (DCB +0x68, installed by 0x412220): optional hook +0x134, steer
   toward +0xec, integrate, staggered engine-audio/collision, Dcb_UpdateChildTransforms */

void Dcb_Think_MultiPart(SpED *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[1].vel.x == 0) {
    if (*(code **)&param_1[1].field_0x60 != (code *)0x0) {
      (**(code **)&param_1[1].field_0x60)(param_1);
    }
    Entity_TurnToward(param_1,(vec3 *)&param_1[1].field_0x18,(ShipFlight *)(param_1->desc + 1),0);
    (param_1->pos).x = (param_1->pos).x + (param_1->vel).x;
    iVar1 = (param_1->ang).x;
    (param_1->pos).y = (param_1->pos).y + (param_1->vel).y;
    iVar2 = (param_1->ang).y;
    (param_1->pos).z = (param_1->pos).z + (param_1->vel).z;
    (param_1->ang).x = iVar1 + (param_1->angVel).x;
    (param_1->ang).y = iVar2 + (param_1->angVel).y;
    (param_1->ang).z = (param_1->ang).z + (param_1->angVel).z;
  }
  if (((param_1[1].ang.z ^ DAT_005897e4) & 0x1f) == 0) {
    Dcb_UpdateEngineAudio(param_1,param_1[1].prev);
  }
  if ((((param_1[1].ang.z ^ DAT_005897e4) & 0xf) == 0) && (((uint)param_1[1].quadrant & 0x10) != 0))
  {
    Power_Regen(&param_1[1].render,&param_1->desc[1].getText,0x12,1);
  }
  Dcb_SetRangeFlags((PowerBlock *)&param_1[1].render,&param_1->desc[1].getText,param_1);
  Dcb_UpdateChildTransforms(param_1);
  return;
}

