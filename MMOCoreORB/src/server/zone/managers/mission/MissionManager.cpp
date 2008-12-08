/*
 *	server/zone/managers/mission/MissionManager.cpp generated by engine3 IDL compiler 0.55
 */

#include "MissionManager.h"

#include "MissionManagerImplementation.h"

#include "../../objects/player/Player.h"

#include "../../objects/mission/MissionObject.h"

#include "../../objects/tangible/TangibleObject.h"

#include "../../objects/creature/action/ActionCreature.h"

#include "../../objects/creature/action/Action.h"

#include "server/zone/ZoneServer.h"

/*
 *	MissionManagerStub
 */

MissionManager::MissionManager(ZoneServer* zs, ZoneProcessServerImplementation* ps) {
	_impl = new MissionManagerImplementation(zs, ps);
	_impl->_setStub(this);
}

MissionManager::MissionManager(DummyConstructorParameter* param) {
	_impl = NULL;
}

MissionManager::~MissionManager() {
}

void MissionManager::init() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->init();
}

void MissionManager::unloadManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->unloadManager();
}

void MissionManager::removeMissions() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->removeMissions();
}

MissionObject* MissionManager::poolMission(String& dbKey, int termMask, const String& typeStr, unsigned int descKey, unsigned int titleKey, unsigned int diffLv, float destX, float destY, unsigned int destPlanetCrc, const String& creatorName, unsigned int rewardAmount, float targetX, float targetY, unsigned int targetPlanetCrc, unsigned int depictedObjCrc, const String& descriptionStf, const String& titleStf, unsigned int typeCrc, TangibleObject* deliverItem, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addAsciiParameter(dbKey);
		method.addSignedIntParameter(termMask);
		method.addAsciiParameter(typeStr);
		method.addUnsignedIntParameter(descKey);
		method.addUnsignedIntParameter(titleKey);
		method.addUnsignedIntParameter(diffLv);
		method.addFloatParameter(destX);
		method.addFloatParameter(destY);
		method.addUnsignedIntParameter(destPlanetCrc);
		method.addAsciiParameter(creatorName);
		method.addUnsignedIntParameter(rewardAmount);
		method.addFloatParameter(targetX);
		method.addFloatParameter(targetY);
		method.addUnsignedIntParameter(targetPlanetCrc);
		method.addUnsignedIntParameter(depictedObjCrc);
		method.addAsciiParameter(descriptionStf);
		method.addAsciiParameter(titleStf);
		method.addUnsignedIntParameter(typeCrc);
		method.addObjectParameter(deliverItem);
		method.addBooleanParameter(doLock);

		return (MissionObject*) method.executeWithObjectReturn();
	} else
		return ((MissionManagerImplementation*) _impl)->poolMission(dbKey, termMask, typeStr, descKey, titleKey, diffLv, destX, destY, destPlanetCrc, creatorName, rewardAmount, targetX, targetY, targetPlanetCrc, depictedObjCrc, descriptionStf, titleStf, typeCrc, deliverItem, doLock);
}

void MissionManager::setupHardcodeMissions() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->setupHardcodeMissions();
}

void MissionManager::sendTerminalData(Player* player, int termBitmask, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);
		method.addSignedIntParameter(termBitmask);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->sendTerminalData(player, termBitmask, doLock);
}

void MissionManager::sendMission(Player* player, String& tKey, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);
		method.addAsciiParameter(tKey);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->sendMission(player, tKey, doLock);
}

void MissionManager::doMissionAccept(Player* player, unsigned long long oid, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(oid);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->doMissionAccept(player, oid, doLock);
}

void MissionManager::doMissionComplete(Player* player, String& tKey, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(player);
		method.addAsciiParameter(tKey);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->doMissionComplete(player, tKey, doLock);
}

void MissionManager::doMissionAbort(Player* player, unsigned long long oid, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);
		method.addUnsignedLongParameter(oid);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->doMissionAbort(player, oid, doLock);
}

void MissionManager::doMissionAbort(Player* player, String& tKey, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(player);
		method.addAsciiParameter(tKey);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->doMissionAbort(player, tKey, doLock);
}

void MissionManager::doMissionSave(Player* player, const String& mkey, const String& objectivevars, const String& killcountvars, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(player);
		method.addAsciiParameter(mkey);
		method.addAsciiParameter(objectivevars);
		method.addAsciiParameter(killcountvars);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->doMissionSave(player, mkey, objectivevars, killcountvars, doLock);
}

void MissionManager::deleteMissionSave(Player* player, String& mkey, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(player);
		method.addAsciiParameter(mkey);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->deleteMissionSave(player, mkey, doLock);
}

bool MissionManager::hasMissionSave(Player* player, const String& mkey, bool createIfNone, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addObjectParameter(player);
		method.addAsciiParameter(mkey);
		method.addBooleanParameter(createIfNone);
		method.addBooleanParameter(doLock);

		return method.executeWithBooleanReturn();
	} else
		return ((MissionManagerImplementation*) _impl)->hasMissionSave(player, mkey, createIfNone, doLock);
}

void MissionManager::getMissionSaveVarLine(Player* player, const String& mkey, const String& dbVar, String& retStr, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addObjectParameter(player);
		method.addAsciiParameter(mkey);
		method.addAsciiParameter(dbVar);
		method.addAsciiParameter(retStr);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->getMissionSaveVarLine(player, mkey, dbVar, retStr, doLock);
}

void MissionManager::getMisoKeysStatus(Player* player, bool finKeys, String& retStr, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addObjectParameter(player);
		method.addBooleanParameter(finKeys);
		method.addAsciiParameter(retStr);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->getMisoKeysStatus(player, finKeys, retStr, doLock);
}

void MissionManager::setMisoKeyCurrent(Player* player, String& misoKey, bool remove, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addObjectParameter(player);
		method.addAsciiParameter(misoKey);
		method.addBooleanParameter(remove);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->setMisoKeyCurrent(player, misoKey, remove, doLock);
}

void MissionManager::setMisoKeyFinished(Player* player, String& misoKey, bool remove, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addObjectParameter(player);
		method.addAsciiParameter(misoKey);
		method.addBooleanParameter(remove);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->setMisoKeyFinished(player, misoKey, remove, doLock);
}

void MissionManager::removeMisoFromPool(MissionObject* miso, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addObjectParameter(miso);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->removeMisoFromPool(miso, doLock);
}

unsigned int MissionManager::getMissionItemCrc(String& tKey, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addAsciiParameter(tKey);
		method.addBooleanParameter(doLock);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionManagerImplementation*) _impl)->getMissionItemCrc(tKey, doLock);
}

void MissionManager::loadMissionScripts() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->loadMissionScripts();
}

void MissionManager::registerFunctions() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->registerFunctions();
}

void MissionManager::registerGlobals() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		method.executeWithVoidReturn();
	} else
		((MissionManagerImplementation*) _impl)->registerGlobals();
}

/*
 *	MissionManagerAdapter
 */

MissionManagerAdapter::MissionManagerAdapter(MissionManagerImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* MissionManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		init();
		break;
	case 7:
		unloadManager();
		break;
	case 8:
		removeMissions();
		break;
	case 9:
		resp->insertLong(poolMission(inv->getAsciiParameter(_param0_poolMission__String_int_String_int_int_int_float_float_int_String_int_float_float_int_int_String_String_int_TangibleObject_bool_), inv->getSignedIntParameter(), inv->getAsciiParameter(_param2_poolMission__String_int_String_int_int_int_float_float_int_String_int_float_float_int_int_String_String_int_TangibleObject_bool_), inv->getUnsignedIntParameter(), inv->getUnsignedIntParameter(), inv->getUnsignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedIntParameter(), inv->getAsciiParameter(_param9_poolMission__String_int_String_int_int_int_float_float_int_String_int_float_float_int_int_String_String_int_TangibleObject_bool_), inv->getUnsignedIntParameter(), inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedIntParameter(), inv->getUnsignedIntParameter(), inv->getAsciiParameter(_param15_poolMission__String_int_String_int_int_int_float_float_int_String_int_float_float_int_int_String_String_int_TangibleObject_bool_), inv->getAsciiParameter(_param16_poolMission__String_int_String_int_int_int_float_float_int_String_int_float_float_int_int_String_String_int_TangibleObject_bool_), inv->getUnsignedIntParameter(), (TangibleObject*) inv->getObjectParameter(), inv->getBooleanParameter())->_getObjectID());
		break;
	case 10:
		setupHardcodeMissions();
		break;
	case 11:
		sendTerminalData((Player*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 12:
		sendMission((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_sendMission__Player_String_bool_), inv->getBooleanParameter());
		break;
	case 13:
		doMissionAccept((Player*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), inv->getBooleanParameter());
		break;
	case 14:
		doMissionComplete((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_doMissionComplete__Player_String_bool_), inv->getBooleanParameter());
		break;
	case 15:
		doMissionAbort((Player*) inv->getObjectParameter(), inv->getUnsignedLongParameter(), inv->getBooleanParameter());
		break;
	case 16:
		doMissionAbort((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_doMissionAbort__Player_String_bool_), inv->getBooleanParameter());
		break;
	case 17:
		doMissionSave((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_doMissionSave__Player_String_String_String_bool_), inv->getAsciiParameter(_param2_doMissionSave__Player_String_String_String_bool_), inv->getAsciiParameter(_param3_doMissionSave__Player_String_String_String_bool_), inv->getBooleanParameter());
		break;
	case 18:
		deleteMissionSave((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_deleteMissionSave__Player_String_bool_), inv->getBooleanParameter());
		break;
	case 19:
		resp->insertBoolean(hasMissionSave((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_hasMissionSave__Player_String_bool_bool_), inv->getBooleanParameter(), inv->getBooleanParameter()));
		break;
	case 20:
		getMissionSaveVarLine((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_getMissionSaveVarLine__Player_String_String_String_bool_), inv->getAsciiParameter(_param2_getMissionSaveVarLine__Player_String_String_String_bool_), inv->getAsciiParameter(_param3_getMissionSaveVarLine__Player_String_String_String_bool_), inv->getBooleanParameter());
		break;
	case 21:
		getMisoKeysStatus((Player*) inv->getObjectParameter(), inv->getBooleanParameter(), inv->getAsciiParameter(_param2_getMisoKeysStatus__Player_bool_String_bool_), inv->getBooleanParameter());
		break;
	case 22:
		setMisoKeyCurrent((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_setMisoKeyCurrent__Player_String_bool_bool_), inv->getBooleanParameter(), inv->getBooleanParameter());
		break;
	case 23:
		setMisoKeyFinished((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_setMisoKeyFinished__Player_String_bool_bool_), inv->getBooleanParameter(), inv->getBooleanParameter());
		break;
	case 24:
		removeMisoFromPool((MissionObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 25:
		resp->insertInt(getMissionItemCrc(inv->getAsciiParameter(_param0_getMissionItemCrc__String_bool_), inv->getBooleanParameter()));
		break;
	case 26:
		loadMissionScripts();
		break;
	case 27:
		registerFunctions();
		break;
	case 28:
		registerGlobals();
		break;
	default:
		return NULL;
	}

	return resp;
}

void MissionManagerAdapter::init() {
	return ((MissionManagerImplementation*) impl)->init();
}

void MissionManagerAdapter::unloadManager() {
	return ((MissionManagerImplementation*) impl)->unloadManager();
}

void MissionManagerAdapter::removeMissions() {
	return ((MissionManagerImplementation*) impl)->removeMissions();
}

MissionObject* MissionManagerAdapter::poolMission(String& dbKey, int termMask, const String& typeStr, unsigned int descKey, unsigned int titleKey, unsigned int diffLv, float destX, float destY, unsigned int destPlanetCrc, const String& creatorName, unsigned int rewardAmount, float targetX, float targetY, unsigned int targetPlanetCrc, unsigned int depictedObjCrc, const String& descriptionStf, const String& titleStf, unsigned int typeCrc, TangibleObject* deliverItem, bool doLock) {
	return ((MissionManagerImplementation*) impl)->poolMission(dbKey, termMask, typeStr, descKey, titleKey, diffLv, destX, destY, destPlanetCrc, creatorName, rewardAmount, targetX, targetY, targetPlanetCrc, depictedObjCrc, descriptionStf, titleStf, typeCrc, deliverItem, doLock);
}

void MissionManagerAdapter::setupHardcodeMissions() {
	return ((MissionManagerImplementation*) impl)->setupHardcodeMissions();
}

void MissionManagerAdapter::sendTerminalData(Player* player, int termBitmask, bool doLock) {
	return ((MissionManagerImplementation*) impl)->sendTerminalData(player, termBitmask, doLock);
}

void MissionManagerAdapter::sendMission(Player* player, String& tKey, bool doLock) {
	return ((MissionManagerImplementation*) impl)->sendMission(player, tKey, doLock);
}

void MissionManagerAdapter::doMissionAccept(Player* player, unsigned long long oid, bool doLock) {
	return ((MissionManagerImplementation*) impl)->doMissionAccept(player, oid, doLock);
}

void MissionManagerAdapter::doMissionComplete(Player* player, String& tKey, bool doLock) {
	return ((MissionManagerImplementation*) impl)->doMissionComplete(player, tKey, doLock);
}

void MissionManagerAdapter::doMissionAbort(Player* player, unsigned long long oid, bool doLock) {
	return ((MissionManagerImplementation*) impl)->doMissionAbort(player, oid, doLock);
}

void MissionManagerAdapter::doMissionAbort(Player* player, String& tKey, bool doLock) {
	return ((MissionManagerImplementation*) impl)->doMissionAbort(player, tKey, doLock);
}

void MissionManagerAdapter::doMissionSave(Player* player, const String& mkey, const String& objectivevars, const String& killcountvars, bool doLock) {
	return ((MissionManagerImplementation*) impl)->doMissionSave(player, mkey, objectivevars, killcountvars, doLock);
}

void MissionManagerAdapter::deleteMissionSave(Player* player, String& mkey, bool doLock) {
	return ((MissionManagerImplementation*) impl)->deleteMissionSave(player, mkey, doLock);
}

bool MissionManagerAdapter::hasMissionSave(Player* player, const String& mkey, bool createIfNone, bool doLock) {
	return ((MissionManagerImplementation*) impl)->hasMissionSave(player, mkey, createIfNone, doLock);
}

void MissionManagerAdapter::getMissionSaveVarLine(Player* player, const String& mkey, const String& dbVar, String& retStr, bool doLock) {
	return ((MissionManagerImplementation*) impl)->getMissionSaveVarLine(player, mkey, dbVar, retStr, doLock);
}

void MissionManagerAdapter::getMisoKeysStatus(Player* player, bool finKeys, String& retStr, bool doLock) {
	return ((MissionManagerImplementation*) impl)->getMisoKeysStatus(player, finKeys, retStr, doLock);
}

void MissionManagerAdapter::setMisoKeyCurrent(Player* player, String& misoKey, bool remove, bool doLock) {
	return ((MissionManagerImplementation*) impl)->setMisoKeyCurrent(player, misoKey, remove, doLock);
}

void MissionManagerAdapter::setMisoKeyFinished(Player* player, String& misoKey, bool remove, bool doLock) {
	return ((MissionManagerImplementation*) impl)->setMisoKeyFinished(player, misoKey, remove, doLock);
}

void MissionManagerAdapter::removeMisoFromPool(MissionObject* miso, bool doLock) {
	return ((MissionManagerImplementation*) impl)->removeMisoFromPool(miso, doLock);
}

unsigned int MissionManagerAdapter::getMissionItemCrc(String& tKey, bool doLock) {
	return ((MissionManagerImplementation*) impl)->getMissionItemCrc(tKey, doLock);
}

void MissionManagerAdapter::loadMissionScripts() {
	return ((MissionManagerImplementation*) impl)->loadMissionScripts();
}

void MissionManagerAdapter::registerFunctions() {
	return ((MissionManagerImplementation*) impl)->registerFunctions();
}

void MissionManagerAdapter::registerGlobals() {
	return ((MissionManagerImplementation*) impl)->registerGlobals();
}

/*
 *	MissionManagerHelper
 */

MissionManagerHelper* MissionManagerHelper::staticInitializer = MissionManagerHelper::instance();

MissionManagerHelper::MissionManagerHelper() {
	className = "MissionManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void MissionManagerHelper::finalizeHelper() {
	MissionManagerHelper::finalize();
}

DistributedObject* MissionManagerHelper::instantiateObject() {
	return new MissionManager(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* MissionManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MissionManagerAdapter((MissionManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	MissionManagerServant
 */

MissionManagerServant::MissionManagerServant() {
	_classHelper = MissionManagerHelper::instance();
}

MissionManagerServant::~MissionManagerServant() {
}

void MissionManagerServant::_setStub(DistributedObjectStub* stub) {
	_this = (MissionManager*) stub;
}

DistributedObjectStub* MissionManagerServant::_getStub() {
	return _this;
}

