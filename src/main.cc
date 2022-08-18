#include <exolix/stdio.h>
#include "net/net.h"
#include "net/db.h"

using Logger::about, Logger::info();
using namespace skylix;

int main() {
    Logger::about("Skylix API Backend Service");
    Logger::wait("Connecting to database via information from './skylix/config.h'");
  
    db::initDb();
  
    Logger::success("Successfully connected to database from './skylix/config.h'");
    Logger::wait("Creating server objects");
  
    net::initNet();
  
    Logger::success("Successfully setup server objects!");
    Logger::wait("Starting server listeners. Gettings configurations from './skylix/config.h'");
  
    net::startNet();
  
    Logger::wait("API backend servers are now online! Check configuration './skylix/config.h'");
    Logger::info("API backend server is fully ready");
}
