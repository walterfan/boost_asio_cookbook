/*
 * TinyServer.cpp
 *
 *  Created on: 2014-6-14
 *      Author: walter
 */

#include "TinyServer.h"
#include "TinyUtil.h"

/* For sockaddr_in */
#include <netinet/in.h>
/* For socket functions */
#include <sys/socket.h>
/* For fcntl */
#include <fcntl.h>

#include <assert.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

#define MAX_LINE 16384

CTinyEchoServer::CTinyEchoServer():m_trptType(TRANSPORT_TCP), m_svcType(SVC_ECHO), m_nPort(0) {
	INFO_TRACE("CTinyEchoServer construct...");

}

CTinyEchoServer::~CTinyEchoServer() {
	INFO_TRACE("CTinyEchoServer destroy...");
}

int CTinyEchoServer::Init(TRANSPORT_PROTOCOL trptType, int nPort)
{
	INFO_TRACE("CTinyEchoServer Init...");
	this->m_svcType = SVC_ECHO;
	this->m_trptType = trptType;
	this->m_nPort = nPort;

	return 0;
}


void CTinyEchoServer::SetOption(int optionKey, void* optionValue)
{
	INFO_TRACE("CTinyEchoServer SetOption...");
}

void* CTinyEchoServer::GetOption(int optionKey)
{
	INFO_TRACE("CTinyEchoServer GetOption...");
	return 0;
}


int CTinyEchoServer::Start()
{
	INFO_TRACE("CTinyEchoServer Start...");
	Run();
	return 0;
}

int CTinyEchoServer::Run()
{
	INFO_TRACE("CTinyEchoServer Run...");
	return 0;
}

int CTinyEchoServer::Stop()
{
	INFO_TRACE("CTinyEchoServer Stop...");
	return 0;
}

int CTinyEchoServer::Clean()
{
	INFO_TRACE("CTinyEchoServer Clean...");
	return 0;
}

ITinyServer* CTinyServerFactory::CreateServer(SVC_PROTOCOL svcType)
{
	if(SVC_ECHO == svcType)
		return new CTinyEchoServer();
	return 0;
}

