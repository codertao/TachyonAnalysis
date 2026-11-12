
/* sweep */

void Race_GetRelationsByName(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = Race_FindByName(param_1);
  Race_GetRelations(uVar1);
  return;
}

