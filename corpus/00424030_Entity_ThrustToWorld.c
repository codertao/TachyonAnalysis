
/* rotate forward speed by the orientation matrix (built from angles +0x4c), accumulate into world
   posDelta +0xa0/a4/a8, scale by def+0x3c; optional out = speed magnitude. This is the
   linear-motion step */

void Entity_ThrustToWorld(SpED *self,float param_2,int param_3,float *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong local_34;
  undefined4 local_2c;
  vec3 local_24;
  vec3 local_18 [2];
  
  local_34._0_4_ = (int)(longlong)ROUND(param_2);
  local_24.x = 0;
  local_24.y = 0;
  local_24.z = (int)local_34;
  FUN_004b1bb0(local_18,(vec3 *)&self->field_0x4c);
  some_rotate_by_global(&local_24,&local_24);
  iVar3 = *(int *)&self->field_0xa0 + local_24.x;
  puVar1 = &self->field_0xa0;
  *(int *)puVar1 = iVar3;
  iVar4 = *(int *)&self->field_0xa4 + local_24.y;
  *(int *)&self->field_0xa4 = iVar4;
  iVar5 = *(int *)&self->field_0xa8 + local_24.z;
  *(int *)&self->field_0xa8 = iVar5;
  local_2c = (undefined4)(longlong)ROUND((float)iVar3 * *(float *)(param_3 + 0x3c));
  *(undefined4 *)puVar1 = local_2c;
  local_2c = (undefined4)(longlong)ROUND((float)iVar4 * *(float *)(param_3 + 0x3c));
  *(undefined4 *)&self->field_0xa4 = local_2c;
  local_2c = (undefined4)(longlong)ROUND((float)iVar5 * *(float *)(param_3 + 0x3c));
  *(undefined4 *)&self->field_0xa8 = local_2c;
  if (param_4 != (float *)0x0) {
    uVar2 = FUN_004e046f(puVar1);
    local_34 = (ulonglong)uVar2;
    *param_4 = (float)local_34;
  }
  return;
}

