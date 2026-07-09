# AWS Certified Cloud Practitioner — Practice Test 3

50 questions. Single-answer unless marked **(Choose TWO)**. Answers are in
[Practice-Test-3-Answers.md](Practice-Test-3-Answers.md).

---

**Q1.** A retailer wants to run low-latency workloads at a location with no nearby AWS Region, such as a factory floor, by extending AWS infrastructure and services to that on-premises site. Which service should it use?
A) AWS Local Zones
B) AWS Outposts
C) AWS Wavelength
D) Amazon CloudFront

**Q2.** A media company wants ultra-low-latency access to AWS compute for mobile applications by embedding AWS infrastructure within telecommunications providers' 5G networks. Which offering is designed for this?
A) AWS Wavelength
B) AWS Outposts
C) AWS Local Zones
D) AWS Direct Connect

**Q3.** Which AWS infrastructure type extends a Region by placing compute and storage services closer to large population centers to enable single-digit-millisecond latency for latency-sensitive applications (e.g., gaming, media rendering)?
A) Edge Location
B) AWS Local Zone
C) Availability Zone
D) Regional Edge Cache

**Q4.** When migrating an application to AWS, which migration strategy involves moving an application without any modifications ("lift and shift")?
A) Refactor
B) Rehost
C) Replatform
D) Retire

**Q5.** Which migration strategy ("repurchase") involves moving from a traditional license to a software-as-a-service model?
A) Retain
B) Repurchase
C) Rehost
D) Relocate

**Q6.** Which service helps organizations set up and govern a secure, multi-account AWS environment based on best practices, automating the setup of AWS Organizations, SCPs, and account baselines?
A) AWS Control Tower
B) AWS Config
C) AWS Systems Manager
D) AWS Service Catalog

**Q7.** Which disaster recovery strategy involves keeping only backups in a secondary Region and restoring infrastructure from those backups only when a disaster occurs — offering the lowest cost but the longest recovery time?
A) Multi-site active/active
B) Warm standby
C) Backup and restore
D) Pilot light

**Q8.** Which disaster recovery strategy keeps a scaled-down but fully functional copy of the production environment always running in a secondary Region, which is then scaled up during a failover?
A) Backup and restore
B) Pilot light
C) Warm standby
D) Multi-site active/active

**Q9.** Which free tool evaluates your workloads against the AWS Well-Architected Framework and provides a report with improvement recommendations?
A) AWS Trusted Advisor
B) AWS Well-Architected Tool
C) AWS Config
D) AWS Compute Optimizer

**Q10.** Which service helps organizations assess their on-premises data centers (server utilization, dependencies) to plan a large-scale migration to AWS?
A) AWS Application Discovery Service
B) AWS Migration Hub only
C) AWS Database Migration Service
D) AWS Schema Conversion Tool

**Q11.** Which CAF perspective focuses on establishing controls and processes to manage risk and achieve compliance across the organization's cloud usage?
A) Platform perspective
B) Governance perspective
C) Operations perspective
D) People perspective

**Q12.** A global company wants a single application deployed across multiple Regions, actively serving user traffic from all of them simultaneously, with automatic failover if one Region becomes unavailable. Which DR strategy is this?
A) Backup and restore
B) Pilot light
C) Warm standby
D) Multi-site active/active

**Q13.** Which of the following best describes an IAM password policy?
A) A set of rules an administrator defines for password complexity, rotation, and reuse for IAM users in an account
B) A policy that only applies to the root user
C) A feature that disables passwords entirely in favor of access keys
D) A billing alert triggered by failed logins

**Q14.** In IAM policy evaluation logic, what happens when one policy explicitly denies an action and another policy explicitly allows the same action for the same principal?
A) The allow always wins
B) The explicit deny always wins
C) AWS picks randomly
D) Both are ignored and the default applies

**Q15.** Which AWS Config feature packages a collection of Config rules and remediation actions designed to help you check compliance with a specific industry or regulatory standard?
A) Conformance pack
B) Config aggregator
C) Config recorder
D) Config Rule Set

**Q16.** Which S3 feature allows objects to be stored using a write-once-read-many (WORM) model, preventing deletion or modification for a fixed retention period — useful for regulatory compliance?
A) S3 Versioning
B) S3 Object Lock
C) S3 Lifecycle policy
D) S3 Transfer Acceleration

**Q17.** Before conducting a penetration test against your own resources hosted on EC2, what must you do first?
A) Nothing — no permission is needed for any AWS resource
B) Submit a request and receive authorization from AWS for the specific, permitted services being tested
C) Only notify your own security team
D) Disable CloudTrail before testing

**Q18.** Which document, available through AWS Artifact, must a customer review and accept before AWS will process certain regulated types of data (like protected health information) on their behalf?
A) The AWS Business Associate Addendum (BAA)
B) The AWS Acceptable Use Policy
C) The SOC 2 report
D) The AWS Customer Agreement summary only

**Q19.** Which service performs automated security assessments of EC2 instances and container images, checking for software vulnerabilities and unintended network exposure?
A) Amazon Inspector
B) Amazon GuardDuty
C) AWS Config
D) Amazon Macie

**Q20.** Which service aggregates and prioritizes security findings from multiple AWS services (like GuardDuty, Inspector, and Macie) and third-party tools into a single dashboard, and checks resources against security standards?
A) AWS Security Hub
B) AWS Trusted Advisor
C) Amazon Detective
D) AWS Config

**Q21.** Which service helps security teams investigate the root cause of potential security issues by automatically collecting and visualizing log data from GuardDuty, VPC Flow Logs, and CloudTrail?
A) Amazon Detective
B) Amazon Macie
C) AWS Firewall Manager
D) AWS X-Ray

**Q22.** Which managed service centralizes and automates the process of backing up data across AWS services (EBS, RDS, DynamoDB, EFS, etc.) with a single console and policy-based backup plans?
A) AWS Backup
B) AWS Storage Gateway
C) Amazon S3 Glacier
D) AWS DataSync

**Q23.** Which paid feature of AWS Shield Advanced provides cost protection against scaling charges incurred during a DDoS attack, along with 24x7 access to the AWS DDoS Response Team (DRT)?
A) Included automatically with Shield Standard
B) A benefit exclusive to Shield Advanced subscribers
C) Only available to Enterprise Support customers, regardless of Shield tier
D) Not offered by AWS

**Q24.** What is the key difference between an IAM permissions boundary and a Service Control Policy (SCP)?
A) They are identical in every way
B) A permissions boundary sets the maximum permissions for an individual IAM user or role; an SCP sets the maximum permissions for an entire AWS account or OU within an Organization
C) SCPs apply only to S3; permissions boundaries apply only to EC2
D) Permissions boundaries can grant access beyond what IAM policies allow

**Q25.** Which hardware-based authentication device can be used as a more secure alternative to a virtual/app-based MFA token for the AWS root user?
A) A U2F security key or hardware MFA device
B) An SSH key pair
C) An EC2 key pair
D) An S3 access point

**Q26.** Which service lets you run batch computing jobs by dynamically provisioning the optimal quantity and type of compute resources based on job requirements, without managing clusters yourself?
A) AWS Batch
B) Amazon EMR
C) AWS Step Functions
D) Amazon ECS

**Q27.** Which service is a fully managed Docker container registry used to store, manage, and deploy container images?
A) Amazon ECR
B) Amazon ECS
C) Amazon EKS
D) AWS CodeBuild

**Q28.** Which service provides a fully managed Kubernetes control plane, allowing customers to run Kubernetes workloads on AWS without installing and operating their own Kubernetes clusters?
A) Amazon ECS
B) Amazon EKS
C) AWS Fargate only
D) AWS App Runner

**Q29.** Which type of Elastic Load Balancer operates at Layer 7 (application layer) and is best suited for HTTP/HTTPS traffic requiring advanced routing based on URL path or hostname?
A) Network Load Balancer (NLB)
B) Application Load Balancer (ALB)
C) Gateway Load Balancer (GLB)
D) Classic Load Balancer only

**Q30.** Which type of Elastic Load Balancer operates at Layer 4 (transport layer) and is optimized for extreme performance and static IP addresses for TCP/UDP traffic?
A) Application Load Balancer (ALB)
B) Network Load Balancer (NLB)
C) Gateway Load Balancer (GLB)
D) HTTP Load Balancer only

**Q31.** A company wants to send 70% of DNS traffic to one endpoint and 30% to another, for A/B testing purposes. Which Route 53 routing policy should they use?
A) Latency-based routing
B) Weighted routing
C) Geolocation routing
D) Failover routing

**Q32.** Which Route 53 routing policy automatically routes users to the AWS Region that provides the lowest network latency for them?
A) Weighted routing
B) Latency-based routing
C) Simple routing
D) Geolocation routing

**Q33.** What is the main difference between Amazon CloudFront and AWS Global Accelerator?
A) They are functionally identical
B) CloudFront caches and delivers static/dynamic web content via edge locations; Global Accelerator improves availability/performance for a broader range of TCP/UDP applications by routing over the AWS global network without caching content
C) Global Accelerator only works with S3 buckets
D) CloudFront cannot be used with dynamic content

**Q34.** Which networking resource is a static, public IPv4 address that you can allocate to your AWS account and associate with an EC2 instance, allowing the address to be remapped quickly to another instance if the original fails?
A) Elastic IP address
B) Private IP address
C) Elastic Network Interface
D) Internet Gateway

**Q35.** Which EC2 feature lets you influence the placement of instances within the underlying hardware — for example, "cluster" placement for low-latency, high-throughput networking, or "spread" placement to reduce correlated failures?
A) Placement Groups
B) Auto Scaling Groups
C) Dedicated Hosts
D) Capacity Reservations

**Q36.** What does an Amazon Machine Image (AMI) provide when you launch an EC2 instance?
A) Only the billing configuration for the instance
B) The information required to launch an instance, including the operating system, application server, and applications
C) A permanent physical server allocation
D) A DNS record for the instance

**Q37.** What is the key difference between Amazon CloudWatch Logs and CloudWatch Metrics?
A) There is no difference
B) Logs store and let you search raw log data/events; Metrics store numerical, time-ordered data points used for dashboards and alarms
C) Metrics are only for billing; Logs are only for security
D) CloudWatch Logs replaced CloudWatch Metrics entirely

**Q38.** Which service helps developers analyze and debug distributed applications by tracing requests as they travel through multiple microservices, identifying performance bottlenecks?
A) AWS X-Ray
B) Amazon CloudWatch Logs Insights
C) AWS CloudTrail
D) AWS Config

**Q39.** Which AWS Storage Gateway type presents cloud-backed virtual tape storage compatible with existing tape backup software, useful for organizations wanting to retire physical tape infrastructure?
A) File Gateway
B) Volume Gateway
C) Tape Gateway
D) Cached Gateway

**Q40.** Which service simplifies and automates the migration of an existing relational database to AWS with minimal downtime, supporting both homogeneous (e.g., Oracle to Oracle) and heterogeneous (e.g., Oracle to Aurora) migrations?
A) AWS Database Migration Service (DMS)
B) AWS Schema Conversion Tool (SCT) alone
C) AWS DataSync
D) AWS Snowball

**Q41.** When migrating a database between different database engines (for example, Oracle to Amazon Aurora PostgreSQL), which tool is used first to convert the source schema and code to be compatible with the target engine?
A) AWS DMS
B) AWS Schema Conversion Tool (SCT)
C) AWS Glue
D) AWS Batch

**Q42.** What is the primary difference between AWS Outposts and AWS Local Zones?
A) There is no difference
B) Outposts places AWS-managed infrastructure physically inside a customer's own data center; Local Zones are AWS-operated infrastructure deployments in additional metro areas, closer to customers, but not on customer premises
C) Local Zones require the customer to purchase and maintain the hardware
D) Outposts can only run Amazon S3

**Q43.** Which service analyzes historical utilization metrics (CPU, memory, network) of EC2 instances, Auto Scaling groups, and EBS volumes, then provides recommendations to right-size resources for cost and performance?
A) AWS Compute Optimizer
B) AWS Trusted Advisor only
C) Amazon CloudWatch alone
D) AWS Cost Explorer

**Q44.** Which of the following best distinguishes a Standard Reserved Instance from a Convertible Reserved Instance?
A) Standard RIs offer a larger discount but cannot change instance family during the term; Convertible RIs offer a smaller discount but allow exchanging for a different instance family
B) There is no difference between them
C) Convertible RIs cannot be purchased for a 3-year term
D) Standard RIs can be exchanged for any instance type at any time for free

**Q45.** Which premium AWS Support feature, available to Enterprise Support customers, provides proactive guidance and a designated pool of experts for well-architected reviews and operational reviews beyond a single TAM relationship?
A) AWS Concierge support team (billing and account experts) alongside a designated Technical Account Manager
B) A feature exclusive to the Basic support plan
C) Trusted Advisor's core checks only
D) AWS Artifact reports

**Q46.** Which service uses machine learning to automatically detect unusual spending patterns in your AWS bill and alert you before costs spiral out of control?
A) AWS Cost Anomaly Detection
B) AWS Budgets Reports
C) AWS Trusted Advisor
D) AWS Pricing Calculator

**Q47.** Which AWS Free Tier category provides certain service usage (such as AWS Lambda's first 1 million requests per month) at no charge indefinitely, not just during the first 12 months?
A) 12 Months Free
B) Always Free
C) Free Trials
D) Introductory Pricing

**Q48.** Which community-driven, AWS-managed knowledge exchange lets customers ask technical questions and receive answers from AWS experts and other customers, replacing the AWS Forums?
A) AWS re:Post
B) AWS Marketplace
C) AWS Artifact
D) AWS IQ

**Q49.** A company on the Basic Support plan experiences a production outage and needs guaranteed technical support with a fast response time. What should they do?
A) Nothing needed — Basic Support includes 24/7 technical support with fast response times
B) Upgrade to at least the Business (or higher) Support plan for 24/7 access to Cloud Support Engineers with guaranteed response times
C) Open a case with AWS Trusted Advisor
D) Contact the AWS root account holder's personal email

**Q50.** Which statement correctly summarizes a core reason to use AWS Trusted Advisor's "Service Limits" check category?
A) It recommends which Region has the lowest prices
B) It warns you when your usage of a resource is approaching the account's service quota, so you can request an increase before hitting the limit
C) It automatically increases all service limits without notice
D) It is only available to Basic Support customers
