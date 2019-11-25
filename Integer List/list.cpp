#include "list.hpp"

IntList::IntList()
{
    head = nullptr;
}

IntList::IntList(const IntList &rhs)
{
    Node *temp = rhs.head, *newer = new Node;
    head = newer;
    while (temp != nullptr)
    {
        newer->data = temp->data;
        temp = temp->next;
        if (temp != nullptr)
        {
            newer->next = new Node;
            newer = newer->next;
        }
        else
            newer->next = nullptr;
    }
}

IntList &IntList::operator=(const IntList &rhs)
{
    if (head != nullptr)
    {
        Node *prev = nullptr;
        while (head != nullptr)
        {
            prev = head;
            head = head->next;
            delete prev;
        }
    }
    Node *temp = rhs.head, *newer = new Node;
    head = newer;
    while (temp != nullptr)
    {
        newer->data = temp->data;
        temp = temp->next;
        if (temp != nullptr)
        {
            newer->next = new Node;
            newer = newer->next;
        }
        else
            newer->next = nullptr;
    }
    return *this;
}

IntList::~IntList()
{
    Node *prev = nullptr;
    while (head != nullptr)
    {
        prev = head;
        head = head->next;
        delete prev;
    }
}

bool IntList::empty()
{
    return head == nullptr;
}

int &IntList::front()
{
    return head->data;
}

unsigned int IntList::size()
{
    Node *temp = head;
    unsigned int count = 0;
    while (temp != nullptr)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void IntList::push_front(int value)
{
    Node *newer = new Node;
    newer->data = value;
    if (empty())
    {
        head = newer;
        newer->next = nullptr;
    }
    else
    {
        newer->next = head;
        head = newer;
    }
}

void IntList::push_back(int value)
{
    Node *newer = new Node;
    newer->data = value;
    if (empty())
    {
        newer->next = nullptr;
        head = newer;
    }
    else
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        newer->next = nullptr;
        temp->next = newer;
    }
}

void IntList::remove(int value)
{
    if (!empty())
    {
        Node *temp = head, *prev = nullptr;
        if (temp->data == value)
            head = temp->next;
        else
        {
            while (temp->next != nullptr && temp->data != value)
            {
                prev = temp;
                temp = temp->next;
            }
            if (temp->data == value)
                prev->next = temp->next;
        }
        delete temp;
    }
}

bool IntList::search(int value)
{
    if (empty())
        return false;
    else
    {
        bool check = false;
        Node *temp = head;
        while (temp != nullptr)
        {
            if (temp->data == value)
            {
                check = true;
                break;
            }
            else
                temp = temp->next;
        }
        return check;
    }
}

void IntList::pop_front()
{
    Node *temp = head;
    head = temp->next;
    delete temp;
}

void IntList::pop_back()
{
    if (!empty())
    {
        Node *temp = head, *prev = nullptr;
        if (head->next == nullptr)
            head = temp->next;
        else
        {
            while (temp->next != nullptr)
            {
                prev = temp;
                temp = temp->next;
            }
            prev->next = nullptr;
        }
        delete temp;
    }
}

IntList::Iterator IntList::begin() const
{
    return IntList::Iterator(head);
}

IntList::Iterator IntList::end() const
{
    Node *temp = head;
    while(temp != nullptr)
    {
        temp=temp->next;
    }
    return IntList::Iterator(temp);
}

IntList::Iterator::Iterator() 
{
    curr = nullptr;
}

IntList::Iterator::Iterator(Node *rhs) 
{
    curr = rhs;
}

IntList::Iterator& IntList::Iterator::operator=(const IntList::Iterator& rhs) 
{
    curr = rhs.curr;
    return *this;
}

bool IntList::Iterator::operator !=(const IntList::Iterator& rhs)  
{
    return curr != rhs.curr;
}

int& IntList::Iterator::operator *() const
{
    return curr->data;
}

IntList::Iterator IntList::Iterator::operator ++(int)
{
    curr = curr->next;
    return *this;
}