#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <sstream>

int Account::_nbAccounts = 0;

int Account::_totalAmount = 0;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_amount = initial_deposit;
    this->_accountIndex = Account::_nbAccounts;
    Account::_nbAccounts++;

    Account::_totalAmount += initial_deposit;
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
    return ;
}

Account::~Account(void)
{
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
    return ;
}

// Public methods

/*------------Accessors--------------*/

int	Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
    return ;
}

/*-----------Non-Accessors------------*/

void	Account::makeDeposit( int deposit )
{
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
    return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (this->_amount < withdrawal)
    {
        this->_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
        return (false);
    }
    else if (this->_amount >= withdrawal)
    {
        this->_nbWithdrawals++;
        Account::_totalNbWithdrawals++;
        Account::_totalAmount -= withdrawal;
        this->_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount - withdrawal << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        this->_amount -= withdrawal;
    }
    return (true);
}

int		Account::checkAmount( void ) const
{
    return (this->_amount);
}

void	Account::displayStatus( void ) const
{
    this->_displayTimestamp();

    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
    return ;
}

// Private methods

void	Account::_displayTimestamp( void )
{
    std::time_t now = std::time(NULL); 
    std::tm     *ltm = std::localtime(&now);

    std::ostringstream timestamp;
    timestamp << "[" 
              << (1900 + ltm->tm_year)
              << (ltm->tm_mon < 9 ? "0" : "") << (ltm->tm_mon + 1)
              << (ltm->tm_mday < 10 ? "0" : "") << ltm->tm_mday
              << "_"
              << (ltm->tm_hour < 10 ? "0" : "") << ltm->tm_hour
              << (ltm->tm_min < 10 ? "0" : "") << ltm->tm_min
              << (ltm->tm_sec < 10 ? "0" : "") << ltm->tm_sec
              << "] ";

    std::cout << timestamp.str();
    return ;
}